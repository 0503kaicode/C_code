#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//type_t  arr_name  [count_n];
//type_t  ��ָ�����Ԫ������
//arr_name  �����������
// count_n   ��һ�������ı��ʽ������ָ������Ĵ�С
//
//int main()
//{
//	//����1
//	int arr1[10];
//
//	//����2
//	char arr3[10];
//	float arr4[10];
//	double arr5[10];
//
//	//����3
//	int count = 10;
//	int arr2[count];
//	//����3����
//	//�䳤����-C99��׼�����ã�vs2019��֧��
//	return 0;
//
//}


int main()
{
	int arr1[10] = { 1 };//����ȫ��ʼ��
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char arr3[] = { 1,2,3,4,5 };//������������������Ŀռ�
	char ch1[] = { "abc" };
	char ch2[] = { 'a','b','c' };
	printf("%s\n", ch1);
	printf("%s\n", ch2);
	printf("%d\n", strlen(ch1));
	printf("%d\n", strlen(ch2));

	//�ص�����ch1��ch2
	return 0;
}