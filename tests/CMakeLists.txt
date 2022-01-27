aux_source_directory(. SOURCE_LIST)

add_executable(Tests ${SOURCE_LIST})
target_link_libraries(Tests ${PROJECT_NAME}::${PROJECT_NAME} gtest_main)

include(GoogleTest)
gtest_discover_tests(Tests)
