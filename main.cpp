#include <iostream>
#include "header_student_will_include.h"
#include "students_code.cpp"

int main() {
    cout << "Mul counter before student code is called: " << _mm256_COUNTER_mul_pd << endl;
    calculation();
    cout << "Mul counter after student code is called: " << _mm256_COUNTER_mul_pd << endl;
    return 0;
}
