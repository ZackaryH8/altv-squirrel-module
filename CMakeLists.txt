cmake_minimum_required(VERSION 3.8)
project(altv-squirrel-module)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_SHARED_LIBRARY_PREFIX "")
set(PROJECT_MODULE_NAME squirrel-module)

add_definitions(-DMODULE_NAME="${PROJECT_MODULE_NAME}")
add_definitions(-D_CRT_SECURE_NO_WARNINGS)

file(GLOB_RECURSE PROJECT_SOURCE_FILES "./src/*.h" "./src/*.hpp" "./src/*.cpp")

include_directories(
        "${PROJECT_SOURCE_DIR}/src"
        "${PROJECT_SOURCE_DIR}/vendors"
        "${PROJECT_SOURCE_DIR}/vendors/simplesquirrel/include"
)

add_library(
        ${PROJECT_MODULE_NAME} SHARED
        ${PROJECT_SOURCE_FILES}
)

