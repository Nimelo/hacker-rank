cmake_minimum_required (VERSION 3.5)
project(magic-square-forming)

set(QUICK_START_VERSION_MAJOR 1)
set(QUICK_START_VERSION_MINOR 0)
file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*.cc)
include_directories("${PROJECT_SOURCE_DIR}/include")

add_library(magic-square-forming-lib STATIC ${SOURCES})
add_executable(magic-square-forming ${SOURCES})

enable_testing()

add_subdirectory(test)