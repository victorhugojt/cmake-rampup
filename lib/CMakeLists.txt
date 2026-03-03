add_library(utils STATIC
    common_utils.c
    math_utils.c
)
target_include_directories(utils PUBLIC ${CMAKE_SOURCE_DIR}/include)
