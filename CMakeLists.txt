cmake_minimum_required(VERSION 3.15...3.21)

project(
  Demo
  VERSION 0.0.1
  DESCRIPTION "A simple demo"
  LANGUAGES CXX)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  set(CMAKE_CXX_STANDARD 20)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS OFF)

  include(FetchContent)

  FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.10.x)
  # For Windows: Prevent overriding the parent project's compiler/linker
  # settings
  set(gtest_force_shared_crt ON)
  FetchContent_MakeAvailable(googletest)

  FetchContent_Declare(
    googlebenchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG v1.6.0)
  set(BENCHMARK_ENABLE_TESTING OFF)
  FetchContent_MakeAvailable(googlebenchmark)

  enable_testing()

  add_subdirectory(tests)

  add_subdirectory(benches)

  add_subdirectory(examples)
endif()

file(GLOB HEADER_LIST include/*.h)
aux_source_directory(src SOURCE_LIST)

add_library(${PROJECT_NAME} ${SOURCE_LIST} ${HEADER_LIST})
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

target_include_directories(${PROJECT_NAME} PUBLIC include)
