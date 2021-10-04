add_executable(Print Print.cpp)

target_compile_features(Print PRIVATE cxx_std_20)

target_link_libraries(Print PRIVATE ${PROJECT_NAME}::${PROJECT_NAME})
