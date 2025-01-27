#undef TRACE_SYSTEM
#define TRACE_SYSTEM fb_privacy

#if !defined(_TRACE_FB_PRIVACY_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_FB_PRIVACY_H

#include <linux/tracepoint.h>

struct fb_privacy_context;

DECLARE_EVENT_CLASS(fbp_state,

	  	TP_PROTO(struct fb_privacy_context *ctx, uint8_t led_state,
		  		 uint8_t led_brightness),

 	  	TP_ARGS(ctx, led_state, led_brightness),

	  	TP_STRUCT__entry(
		  		__field(uint8_t,	led		)
		  		__field(uint8_t,	brightness	)
		  		__field(uint8_t,	privacy		)
	  	),

	  	TP_fast_assign(
		  		__entry->led		= led_state;
		  		__entry->brightness	= led_brightness;
		  		__entry->privacy	= ctx->privacy;
	  	),

	  	TP_printk("led_state=%hhu led_brightness=%hhu privacy=%hhu",
		  		__entry->led, __entry->brightness, __entry->privacy)
);

DEFINE_EVENT(fbp_state, fbp_state_change,
	  	TP_PROTO(struct fb_privacy_context *ctx, uint8_t led_state,
		  		 uint8_t led_brightness),
	  	TP_ARGS(ctx, led_state, led_brightness)
);

DEFINE_EVENT(fbp_state, fbp_bootstrap,
	  	TP_PROTO(struct fb_privacy_context *ctx, uint8_t led_state,
		  		 uint8_t led_brightness),
	  	TP_ARGS(ctx, led_state, led_brightness)
);

TRACE_EVENT(fbp_key_event_callback,

	  	TP_PROTO(bool event),

	  	TP_ARGS(event),

	  	TP_STRUCT__entry(
		  		__field(bool,		event		)
	  	),

	  	TP_fast_assign(
		  		__entry->event		= event;
	  	),

	  	TP_printk("event=%hhu", __entry->event)
);

TRACE_EVENT(fbp_privacy_store,

	  	TP_PROTO(uint8_t cmd, uint8_t value, int ret),

	  	TP_ARGS(cmd, value, ret),

	  	TP_STRUCT__entry(
		  		__field(uint8_t,	cmd		)
		  		__field(uint8_t,	value		)
		  		__field(int,		ret		)
	  	),

	  	TP_fast_assign(
		  		__entry->cmd		= cmd;
		  		__entry->value		= value;
		  		__entry->ret		= ret;
	  	),

	  	TP_printk("cmd=%hhu value=%hhu ret=%d",
		  		__entry->cmd, __entry->value, __entry->ret)
);

TRACE_EVENT(fbp_ack_store,

	  	TP_PROTO(uint8_t ack),

	  	TP_ARGS(ack),

	  	TP_STRUCT__entry(
		  		__field(uint8_t,	ack		)
	  	),

	  	TP_fast_assign(
		  		__entry->ack		= ack;
	  	),

	  	TP_printk("ack=%hhu", __entry->ack)
);

TRACE_EVENT(fbp_timeout_store,

	  	TP_PROTO(unsigned long timeout),

	  	TP_ARGS(timeout),

	  	TP_STRUCT__entry(
		  		__field(unsigned long,	timeout		)
	  	),

	  	TP_fast_assign(
		  		__entry->timeout	= timeout;
	  	),

	  	TP_printk("timeout=%lu", __entry->timeout)
);

DECLARE_EVENT_CLASS(fbp_callback,

	  	TP_PROTO(void* event_handler_fn),

	  	TP_ARGS(event_handler_fn),

	  	TP_STRUCT__entry(
		  		__field(void *,		function	)
	  	),

	  	TP_fast_assign(
		  		__entry->function	= event_handler_fn;
	  	),

	  	TP_printk("function=%pf", __entry->function)
);

DEFINE_EVENT(fbp_callback, fbp_register_callback,
	  	TP_PROTO(void* event_handler_fn),
	  	TP_ARGS(event_handler_fn)
);

DEFINE_EVENT(fbp_callback, fbp_unregister_callback,
	  	TP_PROTO(void* event_handler_fn),
	  	TP_ARGS(event_handler_fn)
);

TRACE_EVENT(fbp_report_event_change,

	  	TP_PROTO(u32 event),

	  	TP_ARGS(event),

	  	TP_STRUCT__entry(
		  		__field(u32,		event		)
	  	),

	  	TP_fast_assign(
		  		__entry->event		= event;
	  	),

	  	    TP_printk("event=%u", __entry->event)
);

TRACE_EVENT(fbp_button_event,

	  	TP_PROTO(int data),

	  	TP_ARGS(data),

	  	TP_STRUCT__entry(
		  		__field(int,	data		)
	  	),

	  	TP_fast_assign(
		  		__entry->data	= data;
	  	),

	  	TP_printk("event (RELEASE: 0, PRESS: 1)=%d", __entry->data)
);

#endif /* _TRACE_FB_PRIVACY_SWITCH_H */

/* This part must be outside protection */
#include <trace/define_trace.h>
