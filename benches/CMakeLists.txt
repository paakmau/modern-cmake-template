add_executable(Benches BenchSimple.cpp)
target_link_libraries(Benches ${PROJECT_NAME}::${PROJECT_NAME}
                      benchmark::benchmark_main)
