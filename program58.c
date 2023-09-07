
// check greater function

#include<stdio.h>

int main()
{
    int a = 0,b=0, c =0;

    printf("Enter the No : \n");
    scanf("%d %d %d",&a,&b,&c);

    if( a > b)
    {
        if(a > c)
        {
            printf("a is greater %d ",a);
        }
        else
        {
             printf("c is greater %d ",c);
        }
        
    }
    else
    {
        if(b > c)
        {
            printf("b is greator %d",b);
        }
        else
        {
            printf("c is greater %d ",c);
        }
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Result : 
// Input : 11 2 51
// Output : 51
//////////////////////////////////////////////////////////////////////////////////////


