#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>//system-执行命令
#include<string.h>//strcmp-

//int main()
//{
//	again:
//	printf("hello\n");
//	goto again;
//	return 0;
//}
// 



//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在一分钟内关机，请输入：我是猪，就取消关机\n请输入：");
//	scanf("%s", input);
//	if (strcmp(input ,"我是猪")==0)//比较两个字符串
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
// 
// 
// 
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}
// 
// 
//函数：1.库函数2.自定义函数
#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
// 
// 
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '#', 5);
//	printf("%s", arr);
//	return 0;
//}
// 
// 
// 
// 
//int get_max(int x, int y)
//{
//	return (x > y) ? x : y;
//  /*  if (x > y)
//		return x;
//	else
//		return y;*/
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	max = get_max(200, 300);
//	printf("max=%d\n", max);
//	return 0;
//}


//传值调用
//传址调用
//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
//int is_prime(int n)
//{
//	n = n % 3;
//	return n;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d  ", i);
//	}
//	return 0;
//}
//打印100-200之间的素数
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <n; j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if(is_prime(i)==1)
		printf("%d ", i);
	}
	return 0;
}