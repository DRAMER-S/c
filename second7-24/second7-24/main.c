#define _CRT_SECURE_NO_WARNINGS 1  
//vs防函数报错
#include <stdio.h>  
//标准输入输出函数库

//c语言是一门结构化的程序设计语言
//c语言中由一个分号隔开的就是一条语句
// 主义代码的书写风格规范
//int main()
//{
//	int a = 0;
//	;  //空语句
//	return 0;
//}

//顺序结构
//从上往下依次执行


//选择结构

//if (表达式)
//{
//	语句；               只有一条语句时大括号可以省略   
//}                      else会和最接近未匹配的if匹配
//
//if (表达式)
//{
//	语句；
//}
//else
//{
//	表达式；
//}
// .....
//int main()
//{
//	int a = 10;
//	if (a < 18)
//	{
//		printf("younger\n");
//	}
//	else
//	{
//		printf("adult\n");
//	}
//	return 0;
//}

//swith(整形表达式)           可以嵌套使用
//{
//	case 整形常量表达式:      必须是整形常量
//       语句；
//		break;                   根据需求加或者不加
//	case 整形常量表达式:
//       语句；
//		break;
//	....
//	default:                  
//		break;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("Monday\n");
//		break;
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Satuday\n");
//		break;
//	case 7:
//		printf("Sounday\n");
//		break;
//	default :
//		printf("Wrong\n");
//		break;
//	}
//	return 0;
//}

//循环结构

//for循环
// 
// for(表达式1;表达式2;表达式3)    初始化变量;条件判断;变量调整
// {                                 这三句可以省略（视情况而定）  若判断条件省略则视为恒为真
//      语句;
// }
// 
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//while循环
// while(表达式)       表达式为真则执行
// {
//     语句;
// }
// 
// 
//int main()                                   break  直接跳出循环
//{                                            continue  跳过本次循环剩下的代码，跳到下一次的条件判断
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//do while循环
// do
// {                              无论条件如何都会执行一次
//    语句;
// }
// (判断条件);
//




//练习

//写一个代码计算n的阶乘
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("n的阶乘是：%d\n", sum);
//	return 0;
//}

//计算1！+2！+3！....+10！
//int main()
//{
//	int n = 10;
//	int i = 1;
//	int tmp = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		tmp = tmp * i;
//		sum += tmp;
//	}
//	return 0;
//}

//写一个代码在有序数组中找到7

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//		if (i == sz)
//			printf("z找不到\n");
//	}
//	return 0;
//}