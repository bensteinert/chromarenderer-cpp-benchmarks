#include <AccumulationBuffer.h>
#include <Sampler.h>
#include <hayai.hpp>


namespace AccumulationBufferBenchmark {

    class AccumulationBufferBenchmark : public ::hayai::Fixture {
    public:
        virtual void SetUp() {

            for (int i = 0; i < toAccumulate.width * toAccumulate.height; ++i) {
                toAccumulate[i] = Vector3(sampler.genrand_real2(), sampler.genrand_real2(), sampler.genrand_real2());
            }
        }

        virtual void TearDown() {

        }

        Sampler sampler = Sampler(13499);
        AccumulationBuffer accBuff = AccumulationBuffer(1024, 1024);
        Image toAccumulate = Image(1024, 1024);
    };


    BENCHMARK_F(AccumulationBufferBenchmark, accumulate, 10, 100) {
        accBuff += toAccumulate;
    }

}
