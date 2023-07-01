// row= 6
// col = 6

/*

 $ * * * * $
 $ * * * * $
 $ * * * * $
 $ * * * * $
 $ * * * * $
 $ * * * * $


*/

#include<stdio.h>

void Display(int irow ,int icol)
{
    int i = 0, j =0;
    
    if(irow != icol)
    {
        printf("Please ennter the same no in rows and cols ..\n");
        return;

    }
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
            if((j==1)||(j == icol))
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the no :\n");
    scanf("%d",&iValue1);

     printf("Enter the no :\n");
    scanf("%d",&iValue2);

     Display(iValue1,iValue2);

    return 0;
}