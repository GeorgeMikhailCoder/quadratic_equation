project(tests)



set (TESTS testMath testOverflow)

foreach (_test ${TESTS})
  add_executable (${_test} ${_test}.cpp)
  target_link_libraries (${_test} main)
  add_test (NAME ${_test} COMMAND ${_test})
endforeach ()

add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND}) # enable 'make check' in addition to CTest