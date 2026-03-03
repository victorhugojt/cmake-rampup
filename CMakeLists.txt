cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

# Build order: lib -> src -> tests
add_subdirectory(lib)
add_subdirectory(src)
enable_testing()
add_subdirectory(tests)
