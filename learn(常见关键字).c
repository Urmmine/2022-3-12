#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//关键字
//C语言提供的，不能自己创建关键字
//关键字不能做变量名

//auto 是自动的-每个局部变量都是auto修饰的(自动创建 自动销毁) //省略掉了

//break case char const continue default do double else enum
//extern float for goto if int register return short signed

//extern用于声明外部符号 register 寄存器关键字
//大量/频繁使用的数据，放在寄存器中，提高效率（编译器已解决）

//signed 有符号的 - 正负
//unsigned 无符号的


//sizeof static struct switch typedef union unsigned void volatile while

//static 静态的
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

////1.修饰局部变量
//void test()
//{
//	static int a = 1;//a是局部变量
//	//static修饰局部变量a后，改变了a的生命周期，a出局部范围未销毁
//	//（本质上是改变了变量的存储类型,理解为变为全局变量）
//  //栈区进入静态区
//
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

////2.修饰全局变量
////extern声明外部符号
//extern int g_val;
////全局变量在整个工程中都可以使用
////static修饰全局变量，使得这个全局变量只能在自己所在的源文件内部可以使用
////即使调用extern声明仍然无法使用
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

////修饰函数
////声明函数
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}




//union 联合体

//void 无-空

//int main()
//{
//	register int num = 100;//建议num的值存放在寄存器中
//	return 0;
// }

// 寄存器   更小   
// 高速缓存 几十MB
// 内存     8G-16G
// 硬盘     500G
// 网盘     2T

//空间越小 造价越高 速度更快

//typedef 类型重命名 类型重定义

//typedef unsigned int u_int;//缩短关键词
//
//int main()
//{
//	unsigned int num = 100;
//	return 0;
//}

//define include 不是关键字，叫预处理指令
