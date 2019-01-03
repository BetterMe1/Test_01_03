/*
date：2019/01/03
author:BetterMe1
program:指针数组与数组指针的区别
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//一维数组传参形式
void test1(int arr[]){}
void test2(int arr[10]){}
void test3(int* arr){}
void test4(int* arr[20]){}
void test5(int** arr){}
//二维数组传参形式
void test6(int arr[3][5]){}
void test7(int arr[][5]){}
void test8(int (*arr)[5]){}
int main(){
	//指针数组是一个存放指针的数组
	//int* p1[10];
	//数组指针是能指向数组的指针
	//int(*p1)[10];
	//对于数组：
	int arr[10] = { 0 };
	printf("%p\n", arr);//arr表示数组首元素的地址
	printf("%p\n", &arr);//&arr表示数组的地址
	printf("%p\n", arr+1);//表示数组下一个元素的地址
	printf("%p\n", &arr+1);//&arr+1跳过整个数组
	//函数指针数组
	int (*parr1[10])(); 
    system("pause");
	return 0;
}