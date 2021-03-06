/* VECTORBLOX MXP SOFTWARE DEVELOPMENT KIT
 *
 * Copyright (C) 2012-2018 VectorBlox Computing Inc., Vancouver, British Columbia, Canada.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *
 *     * Neither the name of VectorBlox Computing Inc. nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * This agreement shall be governed in all respects by the laws of the Province
 * of British Columbia and by the laws of Canada.
 *
 * This file is part of the VectorBlox MXP Software Development Kit.
 *
 */

#ifndef VECTOR_MASK_OBJ_HPP
#define VECTOR_MASK_OBJ_HPP

struct vector_mask_obj{
	static int nested;
	bool done_flag;
	VBX::Vector<vbx_byte_t>* saved;

	template<typename T>
	void constructor(const VBX::Vector<T>& msk);

	template<typename lhs_t,typename rhs_t,VBX::_internal::log_op_t lop,bool negate>
	void constructor(const VBX::_internal::Logical_vop<lhs_t,rhs_t,lop,negate>& msk);

	template<typename lhs_t,typename rhs_t,vinstr_t vinstr,typename btype>
	void constructor(const VBX::_internal::bin_op<lhs_t,rhs_t,vinstr,btype,1>& msk);

	template<typename T,typename U,vinstr_t vinstr,typename btype>
	vector_mask_obj(const VBX::_internal::bin_op<T,U,vinstr,btype,1>& msk);

	template<typename T>
	vector_mask_obj(const VBX::Vector<T>& msk);

	template<typename lhs_t,typename rhs_t,VBX::_internal::log_op_t lop,bool negate>
	vector_mask_obj(const VBX::_internal::Logical_vop<lhs_t,rhs_t,lop,negate>& msk);




	//destructor, run at the end of the masked block
	~vector_mask_obj();

};

#endif //VECTOR_MASK_OBJ_HPP
