cmake_minimum_required(VERSION 3.0)

# set the project name
project(Tutorial)

# enable modern C++
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(mylib)

# add the executable
add_executable(main.exe main.cpp)

target_link_libraries(main.exe PUBLIC mylib)

target_include_directories(main.exe PUBLIC "mylib")

# Test
enable_testing()

find_package(GTest REQUIRED)

add_executable(test.exe test.cpp)

target_link_libraries(test.exe PUBLIC GTest::GTest GTest::Main mylib)

target_include_directories(test.exe PUBLIC "mylib")

gtest_discover_tests(test.exe)


