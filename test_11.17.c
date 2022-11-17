#define _CRT_SECURE_NO_WARNINGS 1
//for循环for(;;)可以省略，不要随意
//顺序for（1；2；4）
//语句3

#include<stdio.h>


int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		
		
		printf("%d ", i);

	}

	return 0;
}



