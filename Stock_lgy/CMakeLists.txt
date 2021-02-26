cmake_minimum_required(VERSION 2.8)

project(Stock)
add_executable(${PROJECT_NAME} "src/main.cpp" ${SRC_FILES} "src/stocker.cpp" ${project_HEADERS} "src/stocker.h")
