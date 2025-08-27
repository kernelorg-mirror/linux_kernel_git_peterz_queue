/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _ASM_X86_UNWIND_USER_H
#define _ASM_X86_UNWIND_USER_H

#define ARCH_INIT_USER_FP_FRAME(ws)			\
	.cfa_off	=  2*(ws),			\
	.ra_off		= -1*(ws),			\
	.fp_off		= -2*(ws),			\
	.use_fp		= true,

#endif /* _ASM_X86_UNWIND_USER_H */
