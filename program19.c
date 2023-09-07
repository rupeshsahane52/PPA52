
#include<stdio.h>

int main(void)
{


    int a = 10;
    a = a++; //11

    a = a++ * a--;  // 110

    printf("%d\n",a);  //110

    printf("%d %d\n",a++,a--);  //109 110


    return 0;
}