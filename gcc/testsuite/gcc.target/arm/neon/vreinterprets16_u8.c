/* Test the `vreinterprets16_u8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vreinterprets16_u8 (void)
{
  int16x4_t out_int16x4_t;
  uint8x8_t arg0_uint8x8_t;

  out_int16x4_t = vreinterpret_s16_u8 (arg0_uint8x8_t);
}

/* { dg-final { cleanup-saved-temps } } */
