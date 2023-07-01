/* 
    
     *
  *  *       // if((i == 3)||(i == j)||(i == 5))
* *  *
  *  *
     *


*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0, j = 0;

    for(i =1;i<=iRow;i++)
    {
        for(j = 1;j<=iCol;j++)
        {
            if((i == 3)||(j % 1 == 0)||(i == 1)||(j == 1)||(i == iRow)||(j == iCol))
            {
                printf("*\t");
            }
            else
            {
                printf("  H \t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    printf("Enter the row = \n");
    scanf("%d",&iValue1);

    printf("Enter the row = \n");
    scanf("%d",&iValue2);
    
    Display(iValue1,iValue2);

    return 0;
}