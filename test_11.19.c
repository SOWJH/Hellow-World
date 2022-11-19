#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

	int i = 0;
	int  n = 0;

	int ret = 1;
	int sum = 0;

	for (n = 1; n <= 3; n++)
	{

			ret = ret * n;                 
		sum = sum + ret;
	}


	printf("%d\n ", sum);

	return 0;
}




//int main()
//{
//	
//	int i = 0;
//	int  n = 0;
//	
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		
//		ret = 1;                     //所以规定ret = 1
//		for (i = 1; i <= n; i++)
//		{
//				
//			ret = ret * i;                 //第三次ret保留下来为2   结果2*、
//			                                   //ret = 1*1
//			                                  //ret = 1*1   *2    第二次：   第一次ret  1*1乘2
//			                                  //ret =2*2    *3   
//                                              // 第三次：     第二次ret的式子变成 2*2最后*i的第三次
//		}
//		sum = sum + ret;
//	}
//
//	
//	printf("%d\n ", sum);
//
//	return 0;
//}








//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		
//		printf("%d ", i);
//		i++;
//     } 
//	while (i <= 10);
//
//
//	return 0;
//}