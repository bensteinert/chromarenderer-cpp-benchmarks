#include <hayai.hpp>
#include <hayai_json_outputter_mod.hpp>


int main() {
    hayai::ConsoleOutputter consoleOutputter;
    hayai::Benchmarker::AddOutputter(consoleOutputter);
    mod_hayai::JsonOutputter jsonOutputter;
    hayai::Benchmarker::AddOutputter(jsonOutputter);
    hayai::Benchmarker::RunAllTests();
    return 0;
}
