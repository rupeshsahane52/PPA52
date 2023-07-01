// rows = 4
// col = 4

/*
   2 3 4 5
   3 4 5 6
   4 5 6 7
   5 6 7 8
*/

#include<stdio.h>

void Display(int irow,int icol)
{
    int i = 0, j =0;
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
            printf("%d\t",i+j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the no of rows  :\n");
    scanf("%d",&iValue1);

     printf("Enter the no of cols  :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}