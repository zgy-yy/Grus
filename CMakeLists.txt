cmake_minimum_required(VERSION 3.10)
project(Grus)

# 设置 C 标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 编译选项
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")

# 源文件
file(GLOB SOURCES src/*.c)

# 包含目录
include_directories(src)

# 创建可执行文件
add_executable(${PROJECT_NAME} ${SOURCES})

