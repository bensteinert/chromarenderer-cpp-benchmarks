cmake_minimum_required(VERSION 2.8.4)
project(chroma_cpp_benchmarks)

set(SOURCE_FILES
        src/benchmarks/cpp/TriangleBenchmark.cpp
        src/benchmarks/cpp/AxisAlignedBoundingBoxIntersectionBenchmark.cpp
        src/benchmarks/cpp/main.cpp src/benchmarks/cpp/Vector3Benchmark.cpp
        src/benchmarks/cpp/ReferenceBenchmark.cpp src/benchmarks/cpp/MathBenchmark.cpp src/benchmarks/cpp/MersenneTwisterBenchmark.cpp)

add_executable(chroma_cpp_benchmarks ${SOURCE_FILES})

add_subdirectory(lib/hayai)
add_subdirectory(chromarenderer)
include_directories(lib/hayai/src ./chromarenderer/src/chroma/headers)
target_link_libraries(chroma_cpp_benchmarks hayai_main ${LIB_TIMING} chroma2-lib)