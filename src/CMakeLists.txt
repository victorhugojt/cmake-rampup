cmake_minimum_required(VERSION 3.10)
project(HelloWorld)
add_library(common SHARED common.c)
add_executable(main main.c)
target_link_libraries(main common)

enable_testing()
add_subdirectory(${CMAKE_SOURCE_DIR}/../tests tests)