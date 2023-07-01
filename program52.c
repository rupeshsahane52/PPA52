#include<stdio.h>

#pragma pack(1)

int fact(int no)
{
    int icnt = 0;
    int ifact = 1;

    for(icnt = 1;icnt<=no;icnt++)
    {
        ifact = ifact * icnt;
    }
    return ifact;
}

int oddNo(int no)
{
    int icnt = 1;
    int odd = 0;

    for(icnt = 1 ;icnt <= no; icnt++)
    {
        if(icnt % 2 != 0  )
        {
            printf("%d\n",icnt);
        }
    }
    return icnt;
}

int main()
{
     int ret  = 0;
     int odd1 = 0;
    int ivalue = 0;
    int ivalue1 = 0;

    printf("Enter the no :  \n");
    scanf("%d",&ivalue);

    ret = fact(ivalue);
    printf("The factorial is %d\n ",ret);




    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

 printf("Enter the no :  ");
    scanf("%d\n",&ivalue1);

    odd1 = oddNo(ivalue1);

     

    printf("The odd no factors id %d %d",oddNo,odd1);

    return 0;
}