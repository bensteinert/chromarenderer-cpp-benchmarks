#include <hayai.hpp>
#include <Sampler.h>

namespace MersenneTwisterBenchmark {

    Sampler sampler = Sampler(13499);
    double result;

    BENCHMARK(MersenneTwister, MTnextDouble, 100, 1000000) {
        result = sampler.genrand_real2();
    }

}




