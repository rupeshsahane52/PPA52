// Spy no is positive no of integer eg 
// 1 + 2 + 3 = 6 &
// 1*2*3= 6
import java .util.Scanner;
class spyNo
{
    public static void main(String arg[])
    {
        
   int num ;
   int product= 1;
   int sum=0;
   int lastdigit;


   Scanner sc  = new Scanner(System.in);
        System.out.println("Enter the no :");
        num = sc.nextInt();



   while(num > 0)
   {
    lastdigit = num % 10;
    sum = sum + lastdigit;
    product = product * lastdigit;
    num = num / 10;
   }
   if(sum == product)
   {
    System.out.println("No is Spy no");
   }
   else
   {
    System.out.println("No is no a spy no");
   }
}
}
