#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//type_t  arr_name  [count_n];
//type_t  是指数组的元素类型
//arr_name  是数组的名字
// count_n   是一个常量的表达式，用来指定数组的大小
//
//int main()
//{
//	//代码1
//	int arr1[10];
//
//	//代码2
//	char arr3[10];
//	float arr4[10];
//	double arr5[10];
//
//	//代码3
//	int count = 10;
//	int arr2[count];
//	//代码3报错
//	//变长数组-C99标准中引用，vs2019不支持
//	return 0;
//
//}


int main()
{
	int arr1[10] = { 1 };//不完全初始化
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char arr3[] = { 1,2,3,4,5 };//后面内容来决定分配的空间
	char ch1[] = { "abc" };
	char ch2[] = { 'a','b','c' };
	printf("%s\n", ch1);
	printf("%s\n", ch2);
	printf("%d\n", strlen(ch1));
	printf("%d\n", strlen(ch2));

	//重点区分ch1和ch2
	return 0;
}