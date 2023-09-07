

#include<stdio.h>

int  main()
{
    const float f = 3.14;

    int radius = 0;


    float Ac = 0;


    printf("Enter the redius is :  \n");
    scanf("%d",&radius);

    Ac = f * radius * radius;

    printf("Thee area of circle is %f\n",Ac);

    return 0;
}