
#include<stdio.h>

int main()
{
    int sub1 = 0;
    int sub2 = 0;
    int sub3 = 0;
    int sub4 = 0;
    int sub5 = 0;

    int  result = 0;

    printf("Enter the maks of sub1 : ");
    scanf("%d",&sub1);


    printf("Enter the maks of sub2 : ");
    scanf("%d",&sub2);

    printf("Enter the maks of sub3 : ");
    scanf("%d",&sub3);

    printf("Enter the maks of sub4 : ");
    scanf("%d",&sub4);

    printf("Enter the maks of sub5 : ");
    scanf("%d",&sub5);

   int sum = sub1+sub2+sub3+sub4+sub5;

    result = sum % 500 * 100;
    

    printf("The studet_percentage is %lf ",result);

    return 0;
}