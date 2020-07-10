#if defined(CMPLX_ON)
  #define _double double complex
  #define eps 1e-10i
#elif defined(CMPLX_OFF)
  #define _double double
  #define eps 0.0
#endif
