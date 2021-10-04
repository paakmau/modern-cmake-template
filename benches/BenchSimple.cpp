#include <Demo/Demo.h>
#include <benchmark/benchmark.h>

static void BenchSimple(benchmark::State& state) {
    for (auto _ : state)
        Demo::HelloWorld();
}
BENCHMARK(BenchSimple);
