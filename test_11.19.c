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
//		ret = 1;                     //���Թ涨ret = 1
//		for (i = 1; i <= n; i++)
//		{
//				
//			ret = ret * i;                 //������ret��������Ϊ2   ���2*��
//			                                   //ret = 1*1
//			                                  //ret = 1*1   *2    �ڶ��Σ�   ��һ��ret  1*1��2
//			                                  //ret =2*2    *3   
//                                              // �����Σ�     �ڶ���ret��ʽ�ӱ�� 2*2���*i�ĵ�����
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