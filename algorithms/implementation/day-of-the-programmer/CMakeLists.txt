cmake_minimum_required (VERSION 3.5)
project(day-of-the-programmer)

set(QUICK_START_VERSION_MAJOR 1)
set(QUICK_START_VERSION_MINOR 0)
file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.cc)
include_directories("${PROJECT_SOURCE_DIR}/include")

add_library(day-of-the-programmer-lib STATIC ${SOURCES})
add_executable(day-of-the-programmer ${SOURCES})

enable_testing()

add_subdirectory(test)