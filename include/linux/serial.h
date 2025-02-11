#ifndef MY_ABC_HERE
#define MY_ABC_HERE
#endif
/*
 * include/linux/serial.h
 *
 * Copyright (C) 1992 by Theodore Ts'o.
 * 
 * Redistribution of this file is permitted under the terms of the GNU 
 * Public License (GPL)
 */
#ifndef _LINUX_SERIAL_H
#define _LINUX_SERIAL_H

#include <asm/page.h>
#include <uapi/linux/serial.h>

#ifdef MY_ABC_HERE
#define SYNO_OOB_TTY                  2
#define SYNO_TX_CHECK_COUNT           1000
#define SYNO_TX_CHECK_THRESHOLD       800
#define SYNO_CTS_CHECK_COUNT          10
#endif /* MY_ABC_HERE */

/*
 * Counters of the input lines (CTS, DSR, RI, CD) interrupts
 */

struct async_icount {
	__u32	cts, dsr, rng, dcd, tx, rx;
	__u32	frame, parity, overrun, brk;
	__u32	buf_overrun;
};

/*
 * The size of the serial xmit buffer is 1 page, or 4096 bytes
 */
#define SERIAL_XMIT_SIZE PAGE_SIZE

#include <linux/compiler.h>

#endif /* _LINUX_SERIAL_H */
