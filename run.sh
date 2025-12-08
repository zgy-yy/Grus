#!/bin/bash

# 颜色定义
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# 项目名称
PROJECT_NAME="Grus"
BUILD_DIR="build"

echo -e "${YELLOW}开始构建 ${PROJECT_NAME}...${NC}"

# 创建构建目录
if [ ! -d "$BUILD_DIR" ]; then
    echo -e "${YELLOW}创建构建目录: ${BUILD_DIR}${NC}"
    mkdir -p "$BUILD_DIR"
fi

# 进入构建目录
cd "$BUILD_DIR" || exit 1

# 配置 CMake
echo -e "${YELLOW}配置 CMake...${NC}"
if ! cmake ..; then
    echo -e "${RED}CMake 配置失败！${NC}"
    exit 1
fi

# 编译项目
echo -e "${YELLOW}编译项目...${NC}"
if ! make; then
    echo -e "${RED}编译失败！${NC}"
    exit 1
fi

# 运行程序
echo -e "${GREEN}运行 ${PROJECT_NAME}...${NC}"
echo -e "${GREEN}----------------------------------------${NC}"
./${PROJECT_NAME}
echo -e "${GREEN}----------------------------------------${NC}"

echo -e "${GREEN}完成！${NC}"

