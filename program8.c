// swap the no

#include<stdio.h>

int main()
{
    int no1 = 11;
    int no2 = 21;
    int temp = 0;

    printf("No before swapping :%d %d\n",no1,no2);
    temp = no1;
    no1 = no2;
    no2 = temp;

    printf("No After swapping :%d %d\n",no1,no2);

    return 0;
}