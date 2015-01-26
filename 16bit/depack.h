/*
 * BriefLZ  -  small fast Lempel-Ziv
 *
 * 16-bit assembler depacker, header file
 *
 * Copyright (c) 2002-2003 by Joergen Ibsen / Jibz
 * All Rights Reserved
 *
 * http://www.ibsensoftware.com/
 */

#ifndef __DEPACK_H_INCLUDED
#define __DEPACK_H_INCLUDED

/* calling convention */
#ifndef BLZCC
 #ifdef __WATCOMC__
  #define BLZCC __cdecl
 #else
  #define BLZCC
 #endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* function prototypes */

unsigned short BLZCC blz16_depack_asm(const void far *source,
                                      void far *destination,
                                      unsigned short length);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __DEPACK_H_INCLUDED */
