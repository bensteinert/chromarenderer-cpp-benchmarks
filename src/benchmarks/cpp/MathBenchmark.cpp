#include <hayai.hpp>
#include <math.h>

namespace MathBenchmark {

    double input = drand48();
    double mathResult;
    int* result = new int[8];

    int i1 = (int) (14 * drand48());
    int i2 = (int) (15 * drand48());
    int i3 = (int) (16 * drand48());
    int i4 = (int) (17 * drand48());
    int i5 = (int) (18 * drand48());
    int i6 = (int) (19 * drand48());
    int i7 = (int) (20 * drand48());
    int i8 = (int) (21 * drand48());
    int j1 = (int) (140 * drand48());
    int j2 = (int) (150 * drand48());
    int j3 = (int) (160 * drand48());
    int j4 = (int) (170 * drand48());
    int j5 = (int) (180 * drand48());
    int j6 = (int) (190 * drand48());
    int j7 = (int) (200 * drand48());
    int j8 = (int) (210 * drand48());


    BENCHMARK(Math, mathSqrt, 100, 1000000) {
        mathResult = sqrt(input);
    }

    BENCHMARK(Math, mathSin, 100, 1000000) {
        mathResult = sin(input);
    }

    BENCHMARK(Math, mathSimdWithInts, 100, 1000000) {
        result[0] = i1 + j1;
        result[1] = i2 + j2;
        result[2] = i3 + j3;
        result[3] = i4 + j4;
        result[4] = i5 + j5;
        result[5] = i6 + j6;
        result[6] = i7 + j7;
        result[7] = i8 + j8;
    }
}


