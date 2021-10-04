cmake_minimum_required(VERSION 3.15...3.21)

project(
  Demo
  VERSION 0.0.1
  DESCRIPTION "A simple demo"
  LANGUAGES CXX)

file(GLOB HEADER_LIST include/*.h)
aux_source_directory(src SOURCE_LIST)

add_library(${PROJECT_NAME} ${SOURCE_LIST} ${HEADER_LIST})
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

target_include_directories(${PROJECT_NAME} PUBLIC include)
