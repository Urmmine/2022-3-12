#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//ȫ�ֱ���
static int g_val = 2022;

//static����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�����ʹ��

//ȫ�ֱ���������Դ�ļ��ڲ�����ʹ�ã�����Ϊ���ⲿ��������
//static���κ����ڲ��������ԣ�����Դ�ļ��������ӵ���̬��ȫ�ֱ���

//static���κ���
static int Add(int x, int y)
{
	return x+y;
}

//static���κ���ȫ�ֱ���Ч����ͬ��ʹ�ú���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//�ⲿ�������Ա���ڲ���������