
cmake_minimum_required(VERSION 3.10)

set(GTEST_ROOT ~/local)
include_directories(${PROJECT_SOURCE_DIR}/src ${GTEST_ROOT}/include/)
link_directories(${GTEST_ROOT}/lib/)

include(GoogleTest)

add_executable(CalcTest calc_test.cpp)
target_link_libraries(CalcTest Calc gtest gtest_main pthread)

gtest_add_tests(TARGET CalcTest)


