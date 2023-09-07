
#include<stdio.h>

int Addition(int value1,int value2)
{
    int Result = 0;

    Result = value1+ value2;

    return Result;
}

int main()
{
    int no1 = 11;

    int no2 = 10;

    int Ans = Addition(no1,no2);

    printf("the addition of values is %d",Ans);

    return 0;
}