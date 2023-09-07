
// size of opretors in c

#include<stdio.h>

int main()
{

    int no1 = 10;
    float no2 = 3.14f;
    double  d = 98.332;
    char ch = 'A';
    

    printf("%d\n",sizeof(no1));  // 4

    printf("%d\n",sizeof(no2)); // 4

    printf("%d\n",sizeof(d)); // 8

    printf("%d\n",sizeof(ch));  // 1


    return 0;
}