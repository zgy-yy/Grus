# Grus

## 构建和运行

### 使用运行脚本（推荐）

最简单的方式是使用提供的运行脚本：

```bash
./run.sh
```

这个脚本会自动完成以下操作：
- 创建构建目录
- 配置 CMake
- 编译项目
- 运行程序

### 使用 CMake

1. 创建构建目录并配置项目：
```bash
mkdir build
cd build
cmake ..
```

2. 编译项目：
```bash
make
```

3. 运行程序：
```bash
./Grus
```

### 一键构建和运行

```bash
mkdir -p build && cd build && cmake .. && make && ./Grus
```

### 清理构建文件

```bash
rm -rf build
```

