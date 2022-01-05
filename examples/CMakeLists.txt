aux_source_directory(. SOURCE_LIST)

foreach(EXAMPLE_SOURCE ${SOURCE_LIST})
  get_filename_component(EXAMPLE_TARGET_NAME ${EXAMPLE_SOURCE} NAME_WLE)
  add_executable(${EXAMPLE_TARGET_NAME} ${EXAMPLE_SOURCE})
  target_compile_features(${EXAMPLE_TARGET_NAME} PRIVATE cxx_std_20)
  target_link_libraries(${EXAMPLE_TARGET_NAME}
    PRIVATE ${PROJECT_NAME}::${PROJECT_NAME})
endforeach()
