add_executable(Tests TestSimple.cpp)
target_link_libraries(Tests ${PROJECT_NAME}::${PROJECT_NAME} gtest_main)

include(GoogleTest)
gtest_discover_tests(Tests)
