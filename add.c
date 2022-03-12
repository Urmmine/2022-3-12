#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//全局变量
static int g_val = 2022;

//static修饰全局变量，使得这个全局变量只能在自己所在的源文件内部可以使用

//全局变量在其他源文件内部可以使用，是因为有外部链接属性
//static修饰后变成内部链接属性，其他源文件不能链接到静态的全局变量

//static修饰函数
static int Add(int x, int y)
{
	return x+y;
}

//static修饰后与全局变量效果相同，使得函数只能在自己所在的源文件内部使用
//外部链接属性变成内部链接属性