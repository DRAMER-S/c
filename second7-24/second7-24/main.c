#define _CRT_SECURE_NO_WARNINGS 1  
//vs����������
#include <stdio.h>  
//��׼�������������

//c������һ�Žṹ���ĳ����������
//c��������һ���ֺŸ����ľ���һ�����
// ����������д���淶
//int main()
//{
//	int a = 0;
//	;  //�����
//	return 0;
//}

//˳��ṹ
//������������ִ��


//ѡ��ṹ

//if (���ʽ)
//{
//	��䣻               ֻ��һ�����ʱ�����ſ���ʡ��   
//}                      else�����ӽ�δƥ���ifƥ��
//
//if (���ʽ)
//{
//	��䣻
//}
//else
//{
//	���ʽ��
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

//swith(���α��ʽ)           ����Ƕ��ʹ��
//{
//	case ���γ������ʽ:      ���������γ���
//       ��䣻
//		break;                   ��������ӻ��߲���
//	case ���γ������ʽ:
//       ��䣻
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

//ѭ���ṹ

//forѭ��
// 
// for(���ʽ1;���ʽ2;���ʽ3)    ��ʼ������;�����ж�;��������
// {                                 ���������ʡ�ԣ������������  ���ж�����ʡ������Ϊ��Ϊ��
//      ���;
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

//whileѭ��
// while(���ʽ)       ���ʽΪ����ִ��
// {
//     ���;
// }
// 
// 
//int main()                                   break  ֱ������ѭ��
//{                                            continue  ��������ѭ��ʣ�µĴ��룬������һ�ε������ж�
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//do whileѭ��
// do
// {                              ����������ζ���ִ��һ��
//    ���;
// }
// (�ж�����);
//




//��ϰ

//дһ���������n�Ľ׳�
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
//	printf("n�Ľ׳��ǣ�%d\n", sum);
//	return 0;
//}

//����1��+2��+3��....+10��
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

//дһ�������������������ҵ�7

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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//		if (i == sz)
//			printf("z�Ҳ���\n");
//	}
//	return 0;
//}