# Natcn

## 项目❓介绍

- CPL 2024-5-function-不计分练习 T3 原始代码仓库

- Git 的配置请参考教程视频

- 你可以自由探索了，Feel Free to Ask Us in 蒙民伟楼 604

## 项目❓结构

`include` 目录存放头文件，其中的 `natcn.h` 进行了三个函数的声明，它们具体的参数、返回值、行为逻辑等信息你可以参考其中的注释

`src` 目录存放源文件，其中的 `natcn.c` 进行了上述三个函数的实现，你需要按照头文件中的注释实现对应的函数

`main.c` 为主函数入口，它会调用 `src` 目录下的所有函数以完成程序的功能

## 提交方式

你可以最朴实无华地使用 GUI 提交压缩包。

如果你有 Linux 环境，你可以使用 Makefile 来编译，运行和提交程序，在 submit 目标下定义变量如下即可（亦可按照 Online Judge 的说明操作）：
    
```makefile
    $(eval TOKEN := ${your token})
```

你也可以使用 Online Judge 说明第二条的 curl，但在 Windows 上需要使用 `curl.exe`