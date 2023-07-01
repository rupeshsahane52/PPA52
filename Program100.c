//rows 3
//cols 4

/*  * * * *
    * * * *
    * * * *
    
*/

#include<stdio.h>

void Display(int irow,int icol)
{
    int i = 0,j = 0;

    if(irow < 0)
    {
        irow =- irow;
    }
    if(icol < 0)
    {
        icol =- icol;
    }
    for(i=1;i<=irow;i++) //Outer
    {
        for(j=1;j<=icol;j++)  // Inner 4 of Outer
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the no of rows :\n");
    scanf("%d",&iValue1);

     printf("Enter the no of cols :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;

}