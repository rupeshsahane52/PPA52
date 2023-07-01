// row = 4
// col = 4

/*

@ @ @ @
2 2 2 2
@ @ @ @
4 4 4 4


*/

#include<stdio.h>

void Display(int irow,int icol)
{
    int i = 0, j = 0;
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
            if((i % 2)== 0)
            {
                printf("%d\t",i);
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter the no :\n");
    scanf("%d",&iValue1);

    printf("Enter the no :");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;

}