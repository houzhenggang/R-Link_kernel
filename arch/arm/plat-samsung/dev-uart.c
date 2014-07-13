/* linux/arch/arm/plat-samsung/dev-uart.c
 *	originally from arch/arm/plat-s3c24xx/devs.c
 *x
 * Copyright (c) 2004 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * Base S3C24XX platform device definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
*/

#include <linux/kernel.h>
#include <linux/platform_device.h>

/* uart devices */

static struct platform_device s3c24xx_uart_device0 = {
	.id		= 0,
};

static struct platform_device s3c24xx_uart_device1 = {
	.id		= 1,
};

static struct platform_device s3c24xx_uart_device2 = {
	.id		= 2,
};

static struct platform_device s3c24xx_uart_device3 = {
	.id		= 3,
};

static struct platform_device s3c24xx_uart_device4 = {
        .id             = 4,
};

static struct platform_device s3c24xx_uart_device5 = {
        .id             = 5,
};


struct platform_device *s3c24xx_uart_src[6] = {
	&s3c24xx_uart_device0,
	&s3c24xx_uart_device1,
	&s3c24xx_uart_device2,
	&s3c24xx_uart_device3,
	&s3c24xx_uart_device4,
	&s3c24xx_uart_device5,
};

struct platform_device *s3c24xx_uart_devs[6] = {
};