#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
//将 三个数字 从大到小输出


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

//输出1-100之间所有3的倍数

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

//给两个数，求最大公约数
//辗转相除法
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


//写出1000-2000的闰年

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



//写出100-200的素数

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
////编写程序数一下 1到 100 的所有整数中出现多少个数字9



//int main()
//{
//	int i = 0;
//	int count = 0;//用来计数
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
//	printf("1-100出现9的次数为： %d \n", count);
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




//二分法/折中法


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
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
//			printf("找到了下标是:%d\n", mid);
//			break;
//		}
//
//	return 0;
//}


#include<stdlib.h>

//求10个整数中的最大值


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





//猜数字游戏
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
//	int random_num = rand() % 100 + 1;  //RAND_MAX--rand函数能返回随机书的最大值  这个数比较大，我们控制到0-100
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字--");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));  //时间戳
//	do {
//		menu();
//		printf("请选择---");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误，请重新输入！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


