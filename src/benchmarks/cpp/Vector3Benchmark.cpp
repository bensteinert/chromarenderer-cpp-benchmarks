#include <hayai.hpp>
#include <Vector3.h>

namespace Vector3Benchmark {

    Vector3 V1 = Vector3(1.f, 2.f, 3.f);
    Vector3 V2 = Vector3(4.f, 5.f, 6.f);
    Vector3 vectorResult;
    float floatResult;

    BENCHMARK(Vector3, crossProduct, 100, 1000000) {
        vectorResult = V1 % V2;
    }

    BENCHMARK(Vector3, scalarProduct, 100, 1000000) {
        floatResult = V1 * V2;
    }

    BENCHMARK(Vector3, minus, 100, 1000000) {
        vectorResult = V1 - V2;
    }
}
