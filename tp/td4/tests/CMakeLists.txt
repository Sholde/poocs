
# Test
find_package(GTest REQUIRED)

add_executable(tests tests.cpp ../src/particles.cpp ../src/simulator.cpp ../src/steady_simulator.cpp ../src/unsteady_simulator.cpp)

target_link_libraries(tests PUBLIC GTest::GTest GTest::Main)

target_include_directories(tests PUBLIC "../src")

gtest_discover_tests(tests)

enable_testing()
