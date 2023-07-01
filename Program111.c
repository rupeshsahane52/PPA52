// row = 4
//col = 4

/*
    @ 2 3 4
    1 @ 3 4
    1 2 @ 4
    1 2 3 @

*/
#include<stdio.h>

void Display(int irow,int icol)
{
    int i = 0,j = 0;

    if(irow != icol)
    {
        printf("Please enter the row no and col no is same......\n");
    }
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
            if(i == j)
            {
                printf("@\t");
            }
            else
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the no  :  \n");
    scanf("%d",&iValue1);

     printf("Enter the no  :  \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0 ;
}