#include "header_student_will_include.h"

// Student can include the immintrin header, doesn't impact the technique.
#include <immintrin.h>

void calculation() {
    double x[10];
    __m256d x_mm1, x_mm2;
    x_mm1 = _mm256_load_pd(x);
    x_mm2 = _mm256_load_pd(x);
    x_mm2 = _mm256_mul_pd(x_mm1, x_mm2);
}