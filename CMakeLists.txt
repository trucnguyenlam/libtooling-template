cmake_minimum_required(VERSION 2.8)

# Project name
project(clang-tool)

# include(CheckCXXCompilerFlag)
# CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
# CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
# if(COMPILER_SUPPORTS_CXX11)
#     set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
# elseif(COMPILER_SUPPORTS_CXX0X)
#     set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
# else()
#         message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
# endif()

# set(CMAKE_CXX_STANDARD 11)

# Set output folder
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    set(LLVM_CONFIG_EXECUTABLE llvm-config)
else()
    # set(CMAKE_MODULE_PATH "/opt/llvm-3.9.1/lib/cmake/clang:/opt/llvm-3.9.1/lib/cmake/llvm")
    set(LLVM_DIR /opt/llvm-3.9.1/lib/cmake/llvm)
    set(Clang_DIR /opt/llvm-3.9.1/lib/cmake/clang)
    set(LLVM_CONFIG_EXECUTABLE /opt/llvm-3.9.1/bin/llvm-config)
endif()


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin/)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

add_subdirectory(src)



