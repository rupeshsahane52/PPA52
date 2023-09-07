
#include<stdio.h>

#define pi 3.14
int main()
{

    int r = 0;

    float Ac = 0;


    printf("Enter the radius : \n");
    scanf("%d",&r);

    Ac = pi *r*r;

    printf("the redius of circle is :%f",Ac);
    return 0;
}