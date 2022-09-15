cmake_minimum_required(VERSION 3.23)
project(CPlusDemo)

#set(CMAKE_CXX_STANDARD 14)

set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_BINARY_DIR})

aux_source_directory(./src APP_SRC)

add_executable(CPlusDemo ${APP_SRC})
#add_executable(CPlusDemo main.cpp)
