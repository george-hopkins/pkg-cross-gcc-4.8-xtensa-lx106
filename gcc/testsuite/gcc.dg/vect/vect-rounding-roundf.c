/* { dg-do compile } */
/* { dg-require-effective-target vect_float } */
/* { dg-require-effective-target vect_call_roundf } */

#define N 32

void
foo (float *output, float *input)
{
  int i = 0;
  /* Vectorizable.  */
  for (i = 0; i < N; i++)
    output[i] = __builtin_roundf (input[i]);
}

/* { dg-final { scan-tree-dump-times "vectorized 1 loops" 1 "vect" { target vect_call_roundf } } } */
/* { dg-final { cleanup-tree-dump "vect" } } */
