foreach(EXAMPLE_SOURCE Print)
  add_executable(${EXAMPLE_SOURCE} ${EXAMPLE_SOURCE}.cpp)
  target_compile_features(${EXAMPLE_SOURCE} PRIVATE cxx_std_20)
  target_link_libraries(${EXAMPLE_SOURCE}
                        PRIVATE ${PROJECT_NAME}::${PROJECT_NAME})
endforeach()
