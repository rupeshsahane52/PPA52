// row = 4
// col = 4

/* 1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4
*/

#include<stdio.h>

    void Display(int irow,int icol)
    {
        int i = 0, j= 0;

        if(irow < 0)
        {
            irow = -irow;
        }
        if(icol <  0)
        {
            icol = -icol;
        }
        for(i=1;i<=irow;i++) //outer
        {
            for(j=1;j<=icol;j++) // inner
            {
                printf("%d\t",j);  // to copy the whlole row to the next line
            }
            printf("\n");
        }
    }


int main()
{
    int iValue1 = 1, iValue2 = 0;

    printf("Enter the no rows : \n");
    scanf("%d",&iValue1);

     printf("Enter the no cols : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;


}