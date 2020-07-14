# 源文件，编译所有的.cpp文件
SRCS := $(wildcard *.cpp)
# 目标文件， 将所有.cpp文件编译为相应的目标文件 
OBJS := $(patsubst %.cpp, %.o, $(SRCS))
# 编译器，使用C++编译器g++
CC := g++
# 编译器选项
CFLAGS := -Wall -O -g
# 第三方库
LIB_FLAGS := 
# 目标可执行文件
TARGET = test
# 构建规则
all : $(TARGET)
# 构建目标可执行文件
$(TARGET) : $(OBJS)
		$(CC) $^ -o $@ $(CFLAGS) $(LIB_FLAGS)
		./$@
# 编译每个.cpp文件为.o文件
%.o : %.cpp
		$(CC) $< -c $(CFLAGS) 
# 清除生成的目标文件
clean : 
		rm -rf $(OBJS) $(TARGET)