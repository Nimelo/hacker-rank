cmake_minimum_required (VERSION 3.5)
project(divisible-sum-pairs)

set(QUICK_START_VERSION_MAJOR 1)
set(QUICK_START_VERSION_MINOR 0)
file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.cc)
include_directories("${PROJECT_SOURCE_DIR}/include")

add_library(divisible-sum-pairs-lib STATIC ${SOURCES})
add_executable(divisible-sum-pairs ${SOURCES})

enable_testing()

add_subdirectory(test)