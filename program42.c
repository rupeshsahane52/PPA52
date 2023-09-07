
// switch case 

#include<stdio.h>

int main()
{

    int n , ch;


    printf("1 . check even or odd\n");
    printf("2 . check positive or negative\n");

    printf("Enter the no :  \n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
                
                printf("Enter the no :");
                scanf("%d",&n);

                if(n % 2 == 0)
                printf("No is even\n");
                else
                    printf("No is negative\n");
                break;

                 case 2:
                case 10:
                printf("Enter the no :");
                scanf("%d",&n);

                if(n % 2 == 0)
                printf("No is even\n");
                else
                    printf("No is odd\n");
                break;

                scanf("%d",&n);

                if(n = n)
                printf("positive no\n");
                else
                    printf("Negative no\n");
                break;



                default:
                        printf("enetr the valid no\n");
                        break;
    }
    return 0;
}