#define _CRT_SECURE_NO_WARNINGS 1



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
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//    case 1:
//        printf("星期1\n");
//    case 2:
//        printf("星期2\n");
//
//
//
//
//    }
    
    
    //if (day == 1)
    //    printf("星期1\n");
    //else if (2 ==day)
    //    printf("星期2\n");
    //else if (3 == day)
    //    printf("星期3\n");
    //else if (4 == day)
    //    printf("星期4\n");




//
//    return 0;
//}