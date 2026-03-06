add_executable(test_main test_main.c)
target_include_directories(test_main PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(test_main PRIVATE utils)
add_test(NAME test_main COMMAND test_main)

add_executable(test_add test_add.c)
target_include_directories(test_add PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(test_add PRIVATE utils)
add_test(NAME test_add COMMAND test_add)

add_executable(test_subtract test_subtract.c)
target_include_directories(test_subtract PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(test_subtract PRIVATE utils)
add_test(NAME test_subtract COMMAND test_subtract)
