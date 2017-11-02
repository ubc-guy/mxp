
/*******************************************************************
*
* CAUTION: This file is automatically generated by HSI.
* Version: 2016.2
* DO NOT EDIT.
*
* Copyright (C) 2010-2017 Xilinx, Inc. All Rights Reserved.*
*Permission is hereby granted, free of charge, to any person obtaining a copy
*of this software and associated documentation files (the Software), to deal
*in the Software without restriction, including without limitation the rights
*to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*copies of the Software, and to permit persons to whom the Software is
*furnished to do so, subject to the following conditions:
*
*The above copyright notice and this permission notice shall be included in
*all copies or substantial portions of the Software.
* 
* Use of the Software is limited solely to applications:
*(a) running on a Xilinx device, or
*(b) that interact with a Xilinx device through a bus or interconnect.
*
*THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL 
*XILINX BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT
*OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
*Except as contained in this notice, the name of the Xilinx shall not be used
*in advertising or otherwise to promote the sale, use or other dealings in
*this Software without prior written authorization from Xilinx.
*

* 
* Description: Driver configuration
*
*******************************************************************/

#include "xparameters.h"
#include "vectorblox_mxp.h"

/*
* The configuration table for devices
*/

VectorBlox_MXP_Config VectorBlox_MXP_ConfigTable[] =
{
	{
		XPAR_VECTORBLOX_MXP_0_DEVICE_ID,
		XPAR_VECTORBLOX_MXP_0_S_AXI_BASEADDR,
		XPAR_VECTORBLOX_MXP_0_S_AXI_HIGHADDR,
		XPAR_VECTORBLOX_MXP_0_VECTOR_LANES,
		XPAR_VECTORBLOX_MXP_0_MAX_MASKED_WAVES,
		XPAR_VECTORBLOX_MXP_0_MASK_PARTITIONS,
		XPAR_VECTORBLOX_MXP_0_SCRATCHPAD_KB,
		XPAR_VECTORBLOX_MXP_0_M_AXI_DATA_WIDTH,
		XPAR_VECTORBLOX_MXP_0_FIXED_POINT_SUPPORT,
		XPAR_VECTORBLOX_MXP_0_MULFXP_WORD_FRACTION_BITS,
		XPAR_VECTORBLOX_MXP_0_MULFXP_HALF_FRACTION_BITS,
		XPAR_VECTORBLOX_MXP_0_MULFXP_BYTE_FRACTION_BITS,
		XPAR_VECTORBLOX_MXP_0_CLOCK_FREQ_HZ,
		XPAR_VECTORBLOX_MXP_0_S_AXI_INSTR_BASEADDR,
		XPAR_VECTORBLOX_MXP_0_VECTOR_CUSTOM_INSTRUCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_0_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_0_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_0_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_1_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_1_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_1_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_2_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_2_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_2_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_3_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_3_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_3_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_4_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_4_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_4_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_5_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_5_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_5_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_6_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_6_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_6_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_7_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_7_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_7_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_8_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_8_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_8_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_9_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_9_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_9_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_10_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_10_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_10_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_11_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_11_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_11_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_12_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_12_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_12_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_13_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_13_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_13_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_14_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_14_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_14_FUNCTIONS,
		XPAR_VECTORBLOX_MXP_0_VCI_15_LANES,
		XPAR_VECTORBLOX_MXP_0_VCI_15_OPCODE_START,
		XPAR_VECTORBLOX_MXP_0_VCI_15_FUNCTIONS
	}
};

