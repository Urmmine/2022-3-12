#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//�ؼ���
//C�����ṩ�ģ������Լ������ؼ���
//�ؼ��ֲ�����������

//auto ���Զ���-ÿ���ֲ���������auto���ε�(�Զ����� �Զ�����) //ʡ�Ե���

//break case char const continue default do double else enum
//extern float for goto if int register return short signed

//extern���������ⲿ���� register �Ĵ����ؼ���
//����/Ƶ��ʹ�õ����ݣ����ڼĴ����У����Ч�ʣ��������ѽ����

//signed �з��ŵ� - ����
//unsigned �޷��ŵ�


//sizeof static struct switch typedef union unsigned void volatile while

//static ��̬��
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

////1.���ξֲ�����
//void test()
//{
//	static int a = 1;//a�Ǿֲ�����
//	//static���ξֲ�����a�󣬸ı���a���������ڣ�a���ֲ���Χδ����
//	//���������Ǹı��˱����Ĵ洢����,���Ϊ��Ϊȫ�ֱ�����
//  //ջ�����뾲̬��
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

////2.����ȫ�ֱ���
////extern�����ⲿ����
//extern int g_val;
////ȫ�ֱ��������������ж�����ʹ��
////static����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�����ʹ��
////��ʹ����extern������Ȼ�޷�ʹ��
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

////���κ���
////��������
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}




//union ������

//void ��-��

//int main()
//{
//	register int num = 100;//����num��ֵ����ڼĴ�����
//	return 0;
// }

// �Ĵ���   ��С   
// ���ٻ��� ��ʮMB
// �ڴ�     8G-16G
// Ӳ��     500G
// ����     2T

//�ռ�ԽС ���Խ�� �ٶȸ���

//typedef ���������� �����ض���

//typedef unsigned int u_int;//���̹ؼ���
//
//int main()
//{
//	unsigned int num = 100;
//	return 0;
//}

//define include ���ǹؼ��֣���Ԥ����ָ��
