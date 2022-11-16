#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//wihile语句（）里只要为真才可执行，
//break结束语句跳出循环
//continue跳出本次循环，继续下一次循环



//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		printf("%d ", i);
//
//		i++;
//
//	}
//
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//
//	while (i <= 10)
//	{
//
//		if (i == 5)
//			continue;
//		i++;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

int main()
{
	int i =0  ;

	while (i <= 10)
	{
		i++;
		if (i == 5)
			break;
		printf("%d ", i);




	}


	return 0;
}






