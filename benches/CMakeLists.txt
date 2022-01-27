aux_source_directory(. SOURCE_LIST)

add_executable(Benches ${SOURCE_LIST})
target_link_libraries(Benches ${PROJECT_NAME}::${PROJECT_NAME} benchmark::benchmark_main)
