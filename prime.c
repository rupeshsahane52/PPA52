
#include<stdio.h>


int checkPrimeNo(int no)
{
    int icnt = 0;
    int prime = 0;

    for(icnt = 2;icnt<=no;icnt++)
    {
         prime = ((icnt * no == no )&&(no * 1 == no));

          return prime;

     printf("%D is prime no",prime);

       

    }
    
}

int main()
{
    int value_1 = 0;

    printf("Enter the no :\n");
    scanf("%d",&value_1);


     checkPrimeNo(value_1);

    
    
    return 0;
}