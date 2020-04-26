#pragma once

#include "immintrin.h"

#define _mm256_mul_pd(A, B) _mm256_our_stub_mul_pd(A,B);

using namespace std;

int _mm256_COUNTER_mul_pd = 0;

__m256d _mm256_our_stub_mul_pd(__m256d a, __m256d b) {
    _mm256_COUNTER_mul_pd++;
    // Here parentheses of function will prevent substitution:
    // https://stackoverflow.com/questions/23022349/why-do-parens-prevent-macro-substitution
    return (_mm256_mul_pd)(a, b);
}
