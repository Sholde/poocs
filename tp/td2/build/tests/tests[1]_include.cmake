if(EXISTS "/home/sholde/dev/master/poocs/tp/td2/build/tests/tests[1]_tests.cmake")
  include("/home/sholde/dev/master/poocs/tp/td2/build/tests/tests[1]_tests.cmake")
else()
  add_test(tests_NOT_BUILT tests_NOT_BUILT)
endif()
