#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//�� �������� �Ӵ�С���


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		int d = a;
		a = b;
		b = d;
	}
	if (a < c)
	{
		int d = a;
		a = c;
		c = d;
	}
	if (b < c)
	{
		int d = b;
		b = c;
		c = d;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}

//���1-100֮������3�ı���

//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//���������������Լ��
//շת�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}


//д��1000-2000������

//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			printf("%d\n", year);
//	}
//	return 0;
//}



//д��100-200������

//int main()
//{
//
//	for (int i = 100;i < 200;i++)
//	{
//		for (int j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//				break;
//			if (i == j + 1)
//				printf("%d ", i);
//		}
//	}
//	return 0;
//}






//
////��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9



//int main()
//{
//	int i = 0;
//	int count = 0;//��������
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//	}
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("1-100����9�Ĵ���Ϊ�� %d \n", count);
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int a = 0;
//	double b = 0;
//	for (a = 1; a < 101; a++)
//	{
//		b = (1.0 / a) * (pow(-1, (a + 1))) + b;
//	}
//	printf("%f\n", b);
//	return 0;
//}



//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (i = 1; i < 10; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%d\t", j, i, i * j);
//            if (i == j)
//                printf("\n");
//        }
//    }

//}




//���ַ�/���з�


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			printf("�ҵ����±���:%d\n", mid);
//			break;
//		}
//
//	return 0;
//}


#include<stdlib.h>

//��10�������е����ֵ


//
//int main()
//{
//	int arr[10] = { 30, 5, 2, 45, 15, 9, 56, 7, 12, 21 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (max > arr[i])
//		{
//			continue;
//		}
//		else
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	
//	return 0;
//}





//��������Ϸ
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("******** 1.paly **********\n");
//	printf("*******  0.exit **********\n");
//	printf("**************************\n");
//}
//
//void game()
//{
//
//	int random_num = rand() % 100 + 1;  //RAND_MAX--rand�����ܷ������������ֵ  ������Ƚϴ����ǿ��Ƶ�0-100
//	int input = 0;
//	while (1)
//	{
//		printf("������µ�����--");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("�´���\n");
//		}
//		else if (input < random_num)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));  //ʱ���
//	do {
//		menu();
//		printf("��ѡ��---");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ��������������룡\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


