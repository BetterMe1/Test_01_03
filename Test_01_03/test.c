/*
date��2019/01/03
author:BetterMe1
program:ָ������������ָ�������
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//һά���鴫����ʽ
void test1(int arr[]){}
void test2(int arr[10]){}
void test3(int* arr){}
void test4(int* arr[20]){}
void test5(int** arr){}
//��ά���鴫����ʽ
void test6(int arr[3][5]){}
void test7(int arr[][5]){}
void test8(int (*arr)[5]){}
int main(){
	//ָ��������һ�����ָ�������
	//int* p1[10];
	//����ָ������ָ�������ָ��
	//int(*p1)[10];
	//�������飺
	int arr[10] = { 0 };
	printf("%p\n", arr);//arr��ʾ������Ԫ�صĵ�ַ
	printf("%p\n", &arr);//&arr��ʾ����ĵ�ַ
	printf("%p\n", arr+1);//��ʾ������һ��Ԫ�صĵ�ַ
	printf("%p\n", &arr+1);//&arr+1������������
	//����ָ������
	int (*parr1[10])(); 
    system("pause");
	return 0;
}