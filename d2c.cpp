#include <stdio.h>
#include <iostream>
#include <complex.h>
#include <string.h>
#include <stdlib.h>

#include "precision.h"

int main () {

  _double x;

#ifdef CMPLX_ON
  printf("complex ON\n");
  x = 2.0 + 1.e-20i;
#elif CMPLX_OFF
  printf("complex OFF\n");
  x = 2.0;
#endif

  printf("real(x) = %g, imag(x) = %g  \n", creal(x), cimag(x));

  // test complex
  double complex y;
  y = creal(x);
  printf("real(y) = %g, imag(y) = %g  \n", creal(y), cimag(y));
}
