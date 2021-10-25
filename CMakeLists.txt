cmake_minimum_required(VERSION 3.20)
project(altv_squirrel_module)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_SHARED_LIBRARY_PREFIX "")
set(PROJECT_MODULE_NAME altv_squirrel_module)

add_definitions(-DMODULE_NAME="${PROJECT_MODULE_NAME}")
add_definitions(-D_CRT_SECURE_NO_WARNINGS)

file(GLOB_RECURSE PROJECT_SOURCE_FILES "./src/*.h" "./src/*.hpp" "./src/*.cpp")

include_directories(
        "${PROJECT_SOURCE_DIR}/src"
        "${PROJECT_SOURCE_DIR}/vendors/alt-sdk"
        "${PROJECT_SOURCE_DIR}/vendors/simplesquirrel/include/simplesquirrel"
)

add_library(
        ${PROJECT_MODULE_NAME} SHARED
        ${PROJECT_SOURCE_FILES}
)