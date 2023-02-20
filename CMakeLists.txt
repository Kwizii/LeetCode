cmake_minimum_required(VERSION 3.24)
project(LeetCode)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS "-std=c11")

include_directories("${PROJECT_BINARY_DIR}")

# Find all *.cpp files and store in list native_srcs
file(GLOB_RECURSE cpp_native_srcs RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB_RECURSE c_native_srcs RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
foreach (srcfile IN LISTS cpp_native_srcs)
    # Get file name without directory
    get_filename_component(elfname ${srcfile} NAME_WE)
    add_executable(${elfname} ${srcfile})
endforeach ()

foreach (srcfile IN LISTS c_native_srcs)
    # Get file name without directory
    get_filename_component(elfname ${srcfile} NAME_WE)
    add_executable(${elfname} ${srcfile})
endforeach ()