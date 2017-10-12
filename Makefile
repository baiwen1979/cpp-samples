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
# 最终目标文件
TARGET = test
all : $(TARGET)
$(TARGET) : $(OBJS)
		$(CC) $^ -o $@ $(CFLAGS) $(LIB_FLAGS)
		./$@
%.o : %.cpp
		$(CC) $< -c $(CFLAGS) 

clean : 
		rm -rf $(OBJS) $(TARGET)