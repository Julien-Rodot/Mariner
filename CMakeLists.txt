cmake_minimum_required(VERSION 3.10.0)
project(Mariner VERSION 0.1.0 LANGUAGES C CXX ASM)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE Sources
    ${PROJECT_SOURCE_DIR}/include/**/*.hpp
    ${PROJECT_SOURCE_DIR}/include/**/*.cpp
    ${PROJECT_SOURCE_DIR}/src/**/*.hpp
    ${PROJECT_SOURCE_DIR}/src/**/*.cpp
)

add_library(MarinerLib SHARED ${Sources})
target_include_directories(MarinerLib PUBLIC

    ${PROJECT_SOURCE_DIR}/include/
    ${PROJECT_SOURCE_DIR}/src/enums/
    ${PROJECT_SOURCE_DIR}/src/objects/
    ${PROJECT_SOURCE_DIR}/src/services/
    ${PROJECT_SOURCE_DIR}/src/libraries/

)

add_executable(Mariner ${PROJECT_SOURCE_DIR}/examples/main.cpp)

target_compile_options(Mariner PRIVATE -pedantic -std=c++2c -ftime-report) 
target_link_libraries(Mariner PRIVATE MarinerLib)
