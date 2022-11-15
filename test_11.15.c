#define _CRT_SECURE_NO_WARNINGS 1

//switch语句没有break会向下继续执行
//switch()括号里进入
#include<stdio.h>


int main()
{
    int n = 1;
    int m = 2;

    switch (n)
    {
    case 1:
        m++;
    case 2:
        n++;
    case 3:
        switch (n)
        {
        case 1:
            n++;
        case 2:
            m++;
            n++;
            break;

        }

    case 4:
        m++;
        break;
    default:
        break;
    }
    printf("m = %d, n = %d\n", m, n);


    return 0;
}
