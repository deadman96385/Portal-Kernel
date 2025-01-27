/*
 *****************************************************************************
 * Copyright by ams AG                                                       *
 * All rights are reserved.                                                  *
 *                                                                           *
 * IMPORTANT - PLEASE READ CAREFULLY BEFORE COPYING, INSTALLING OR USING     *
 * THE SOFTWARE.                                                             *
 *                                                                           *
 * THIS SOFTWARE IS PROVIDED FOR USE ONLY IN CONJUNCTION WITH AMS PRODUCTS.  *
 * USE OF THE SOFTWARE IN CONJUNCTION WITH NON-AMS-PRODUCTS IS EXPLICITLY    *
 * EXCLUDED.                                                                 *
 *                                                                           *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS       *
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT         *
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS         *
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT  *
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,     *
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT          *
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,     *
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY     *
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT       *
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE     *
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.      *
 *****************************************************************************
 */

/*! \file
 * \brief Device driver for monitoring ambient light intensity in (lux)
 * proximity detection (prox), and color temperature functionality within the
 * AMS-TAOS TCS3408 family of devices.
 */

#ifndef TCS3408_REG_H
#define TCS3408_REG_H

#define TCS3408_REG_RAM_START 0x00
#define TCS3408_REG_ENABLE 0x80
#define TCS3408_REG_ATIME 0x81
#define TCS3408_REG_PTIME 0x82
#define TCS3408_REG_WTIME 0x83
#define TCS3408_REG_AILTL 0x84
#define TCS3408_REG_AILTH 0x85
#define TCS3408_REG_AIHTL 0x86
#define TCS3408_REG_AIHTH 0x87
#define TCS3408_REG_PILTL0 0x88
#define TCS3408_REG_PILTH0 0x89
#define TCS3408_REG_PILTL1 0x8A
#define TCS3408_REG_PILTH1 0x8B
#define TCS3408_REG_PIHTL0 0x8C
#define TCS3408_REG_PIHTH0 0x8D
#define TCS3408_REG_PIHTL1 0x8E
#define TCS3408_REG_PIHTH1 0x8F
#define TCS3408_REG_AUXID 0x90
#define TCS3408_REG_REVID 0x91
#define TCS3408_REG_ID 0x92
#define TCS3408_REG_STATUS 0x93
#define TCS3408_REG_ASTATUS 0x94
#define TCS3408_REG_ADATAL0 0x95
#define TCS3408_REG_ADATAH0 0x96
#define TCS3408_REG_ADATAL1 0x97
#define TCS3408_REG_ADATAH1 0x98
#define TCS3408_REG_ADATAL2 0x99
#define TCS3408_REG_ADATAH2 0x9A
#define TCS3408_REG_ADATAL3 0x9B
#define TCS3408_REG_ADATAH3 0x9C
#define TCS3408_REG_ADATAL4 0x9D
#define TCS3408_REG_ADATAH4 0x9E
#define TCS3408_REG_ADATAL5 0x9F
#define TCS3408_REG_ADATAH5 0xA0
#define TCS3408_REG_PDATAL 0xA1
#define TCS3408_REG_PDATAH 0xA2
#define TCS3408_REG_STATUS2 0xA3
#define TCS3408_REG_STATUS3 0xA4
#define TCS3408_REG_STATUS4 0xA5
#define TCS3408_REG_STATUS5 0xA6
#define TCS3408_REG_STATUS6 0xA7
#define TCS3408_REG_CFG0 0xA9
#define TCS3408_REG_CFG1 0xAA
#define TCS3408_REG_CFG3 0xAC
#define TCS3408_REG_CFG4 0xAD
#define TCS3408_REG_CFG6 0xAF
#define TCS3408_REG_CFG8 0xB1
#define TCS3408_REG_CFG9 0xB2
#define TCS3408_REG_CFG10 0xB3
#define TCS3408_REG_CFG11 0xB4
#define TCS3408_REG_CFG12 0xB5
#define TCS3408_REG_CFG14 0xB7
#define TCS3408_REG_PCFG1 0xB8
#define TCS3408_REG_PCFG2 0xB9
#define TCS3408_REG_PCFG4 0xBB
#define TCS3408_REG_PCFG5 0xBC
#define TCS3408_REG_PERS 0xBD
#define TCS3408_REG_GPIO 0xBE
#define TCS3408_REG_POFFSETL 0xC7
#define TCS3408_REG_POFFSETH 0xC8
#define TCS3408_REG_ASTEPL 0xCA
#define TCS3408_REG_ASTEPH 0xCB
#define TCS3408_REG_AGC_GAIN_MAX 0xCF
#define TCS3408_REG_PXAVEL 0xD0
#define TCS3408_REG_PXAVEH 0xD1
#define TCS3408_REG_PBSLNL 0xD2
#define TCS3408_REG_PBSLNH 0xD3
#define TCS3408_REG_ALS_CHANNEL_CTRL 0xD5
#define TCS3408_REG_AZCONFIG 0xD6
#define TCS3408_REG_FD_TIME 0xD8
#define TCS3408_REG_FD_CONFIG 0xDA
#define TCS3408_REG_FD_STATUS 0xDB
#define TCS3408_ICONFIG 0xE0
#define TCS3408_ICONFIG2 0xE1
#define TCS3408_ISNL 0xE2
#define TCS3408_ISOFF 0xE3
#define TCS3408_IPNL 0xE4
#define TCS3408_IPOFF 0xE5
#define TCS3408_IBT 0xE6
#define TCS3408_ISLEN 0xE7
#define TCS3408_ISTART 0xE8
#define TCS3408_REG_CALIB 0xEA
#define TCS3408_REG_CALIBCFG0 0xEB
#define TCS3408_REG_CALIBCFG1 0xEC
#define TCS3408_REG_CALIBCFG2 0xED
#define TCS3408_REG_CALIBSTAT 0xEE
#define TCS3408_REG_INTENAB 0xF9
#define TCS3408_REG_CONTROL 0xFA
#define TCS3408_REG_FIFO_MAP 0xFC
#define TCS3408_REG_FIFO_LVL 0xFD
#define TCS3408_REG_FDATAL 0xFE
#define TCS3408_REG_FDATAH 0xFF

#define TCS3408_PON_SHIFT 0
#define TCS3408_MASK_PON (1 << TCS3408_PON_SHIFT)

#define TCS3408_AEN_SHIFT 1
#define TCS3408_MASK_AEN (1 << TCS3408_AEN_SHIFT)

#define TCS3408_PEN_SHIFT 2
#define TCS3408_MASK_PEN (1 << TCS3408_PEN_SHIFT)

#define TCS3408_WEN_SHIFT 3
#define TCS3408_MASK_WEN (1 << TCS3408_WEN_SHIFT)

#define TCS3408_FDEN_SHIFT 6
#define TCS3408_MASK_FDEN (1 << TCS3408_FDEN_SHIFT)

#define TCS3408_IBEN_SHIFT 7
#define TCS3408_MASK_IBEN (1 << TCS3408_IBEN_SHIFT)

#define TCS3408_SIEN_SHIFT 0
#define TCS3408_MASK_SIEN (1 << TCS3408_SIEN_SHIFT)

#define TCS3408_CIEN_SHIFT 1
#define TCS3408_MASK_CIEN (1 << TCS3408_CIEN_SHIFT)

#define TCS3408_FIEN_SHIFT 2
#define TCS3408_MASK_FIEN (1 << TCS3408_FIEN_SHIFT)

#define TCS3408_AIEN_SHIFT 3
#define TCS3408_MASK_AIEN (1 << TCS3408_AIEN_SHIFT)

#define TCS3408_PIEN0_SHIFT 4
#define TCS3408_MASK_PIEN0 (1 << TCS3408_PIEN0_SHIFT)

#define TCS3408_PIEN1_SHIFT 5
#define TCS3408_MASK_PIEN1 (1 << TCS3408_PIEN1_SHIFT)

#define TCS3408_PSIEN_SHIFT 6
#define TCS3408_MASK_PSIEN (1 << TCS3408_PSIEN_SHIFT)

#define TCS3408_ASIEN_SHIFT 7
#define TCS3408_MASK_ASIEN (1 << TCS3408_ASIEN_SHIFT)

#define TCS3408_SIEN_FD_SHIFT 6
#define TCS3408_MASK_SIEN_FD_SHIFT (1 << TCS3408_SIEN_FD_SHIFT)

#define TCS3408_CLEAR_SAI_ACTIVE_SHIFT 0
#define TCS3408_MASK_CLEAR_SAI_ACTIVE (1 << TCS3408_CLEAR_SAI_ACTIVE_SHIFT)

#define TCS3408_FIFO_CLR_SHIFT 1
#define TCS3408_MASK_FIFO_CLR (1 << TCS3408_FIFO_CLR_SHIFT)

#define TCS3408_ALS_MANUAL_AZ_SHIFT 2
#define TCS3408_MASK_ALS_MANUAL_AZ (1 << TCS3408_ALS_MANUAL_AZ_SHIFT)

#define TCS3408_AGAIN_SHIFT 0
#define TCS3408_MASK_AGAIN (0x1F << TCS3408_AGAIN_SHIFT)

#define TCS3408_RAM_BANK_SHIFT 0
#define TCS3408_MASK_RAM_BANK (0x3 << TCS3408_RAM_BANK_SHIFT)

#define TCS3408_ALS_TRIGGER_LONG_SHIFT 2
#define TCS3408_MASK_ALS_TRIGGER_LONG (1 << TCS3408_ALS_TRIGGER_LONG_SHIFT)

#define TCS3408_PROX_TRIGGER_LONG_SHIFT 3
#define TCS3408_MASK_PROX_TRIGGER_LONG (1 << TCS3408_PROX_TRIGGER_LONG)

#define TCS3408_LOWPOWER_IDLE_SHIFT 5
#define TCS3408_MASK_LOWPOWER_IDLE (1 << TCS3408_LOWPOWER_IDLE_SHIFT)

#define TCS3408_SWAP_PROX_ALS5_SHIFT 0
#define TCS3408_MASK_SWAP_PROX_ALS5 (1 << TCS3408_SWAP_PROX_ALS5_SHIFT)

#define TCS3408_ALS_AGC_ENABLE_SHIFT 2
#define TCS3408_MASK_ALS_AGC_ENABLE (1 << TCS3408_ALS_AGC_ENABLE_SHIFT)

#define TCS3408_FD_AGC_DISABLE_SHIFT 3
#define TCS3408_MASK_FD_AGC_DISABLE (1 << TCS3408_FD_AGC_DISABLE_SHIFT)

#define TCS3408_CONCURRENT_PROX_AND_ALS_SHIFT 4
#define TCS3408_MASK_CONCURRENT_PROX_AND_ALS \
	 (1 << TCS3408_CONCURRENT_PROX_AND_ALS_SHIFT)

#define TCS3408_FIFO_THR_SHIFT 6
#define TCS3408_MASK_FIFO_THR (0xC0 << TCS3408_FIFO_THR_SHIFT)

#define TCS3408_APERS_SHIFT 0
#define TCS3408_MASK_APERS (0xF << TCS3408_APERS_SHIFT)

#define TCS3408_PPERS_SHIFT 4
#define TCS3408_MASK_PPERS (0x0F << TCS3408_PPERS_SHIFT)

#define TCS3408_FIFO_WRITE_ASTATUS_SHIFT 0
#define TCS3408_MASK_FIFO_WRITE_ASTATUS (1 << TCS3408_FIFO_WRITE_ASTATUS_SHIFT)

#define TCS3408_FIFO_WRITE_ADATA0_SHIFT 1
#define TCS3408_MASK_FIFO_WRITE_ADATA0 (1 << TCS3408_FIFO_WRITE_ADATA0_SHIFT)

#define TCS3408_FIFO_WRITE_ADATA1_SHIFT 2
#define TCS3408_MASK_FIFO_WRITE_ADATA1 (1 << TCS3408_FIFO_WRITE_ADATA1_SHIFT)

#define TCS3408_FIFO_WRITE_ADATA2_SHIFT 3
#define TCS3408_MASK_FIFO_WRITE_ADATA2 (1 << TCS3408_FIFO_WRITE_ADATA2_SHIFT)

#define TCS3408_FIFO_WRITE_ADATA3_SHIFT 4
#define TCS3408_MASK_FIFO_WRITE_ADATA3 (1 << TCS3408_FIFO_WRITE_ADATA3_SHIFT)

#define TCS3408_FIFO_WRITE_ADATA4_SHIFT 5
#define TCS3408_MASK_FIFO_WRITE_ADATA4 (1 << TCS3408_FIFO_WRITE_ADATA4_SHIFT)

#define TCS3408_FIFO_WRITE_ADATA5_SHIFT 6
#define TCS3408_MASK_FIFO_WRITE_ADATA5 (1 << TCS3408_FIFO_WRITE_ADATA5_SHIFT)

#define TCS3408_FIFO_WRITE_PDATA_SHIFT 7
#define TCS3408_MASK_FIFO_WRITE_PDATA (1 << TCS3408_FIFO_WRITE_PDATA_SHIFT)

#define TCS3408_SINT_SHIFT 0
#define TCS3408_MASK_SINT (1 << TCS3408_SINT_SHIFT)

#define TCS3408_CINT_SHIFT 1
#define TCS3408_MASK_CINT (1 << TCS3408_CINT_SHIFT)

#define TCS3408_FINT_SHIFT 2
#define TCS3408_MASK_FINT (1 << TCS3408_FINT_SHIFT)

#define TCS3408_AINT_SHIFT 3
#define TCS3408_MASK_AINT (1 << TCS3408_AINT_SHIFT)

#define TCS3408_PINT0_SHIFT 4
#define TCS3408_MASK_PINT0 (1 << TCS3408_PINT0_SHIFT)

#define TCS3408_PINT1_SHIFT 5
#define TCS3408_MASK_PINT1 (1 << TCS3408_PINT1_SHIFT)

#define TCS3408_PSAT_SHIFT 6
#define TCS3408_MASK_PSAT (1 << TCS3408_PSAT_SHIFT)

#define TCS3408_ASAT_SHIFT 7
#define TCS3408_MASK_ASAT (1 << TCS3408_ASAT_SHIFT)

#define TCS3408_FIFO_OV_SHIFT 7
#define TCS3408_MASK_FIFO_OV (1 << TCS3408_FIFO_OV_SHIFT)

#endif /* TCS3408_REG_H */
