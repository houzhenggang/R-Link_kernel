/* linux/arch/arm/mach-s5p6450/include/mach/debug-macro.S
 *
 * Copyright (c) 2009 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

/* pull in the relevant register and map files. */

#include <mach/map.h>
#include <plat/regs-serial.h>

	/* note, for the boot process to work we have to keep the UART
	 * virtual address aligned to an 1MiB boundary for the L1
	 * mapping the head code makes. We keep the UART virtual address
	 * aligned and add in the offset when we load the value here.
	 */

	.macro addruart, rx, rtmp
		mrc	p15, 0, \rx, c1, c0
		tst	\rx, #1
		ldreq	\rx, = S3C_PA_UART
		ldrne	\rx, = S3C_VA_UART
#if CONFIG_DEBUG_S3C_UART != 0
		add	\rx, \rx, #(0x400 * CONFIG_DEBUG_S3C_UART)
#endif
	.endm

/* include the reset of the code which will do the work, we're only
 * compiling for a single cpu processor type so the default of s3c2440
 * will be fine with us.
 */

#include <plat/debug-macro.S>
