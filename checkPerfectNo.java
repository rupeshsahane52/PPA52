// input = 6

import java.util.Scanner;

class checkPerfectNo
{
    static long isPerfect(long num)
    {
        long sum = 0;
        for(int i = 1;i<=num/2;i++)
        {
            if(num % i == 0)
            {
                sum = sum  + i;
            }
        }
        return sum;
    }
   

public static void main(String arg[])
{
    long no , s;

    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the no :\n");

    no = sc.nextLong();

    s = isPerfect(no);
    if(s == no)
    {
        System.out.print(no+" is a  perfect");
    }
    else
    {
        System.out.print(no+"  is not a perfect No");
    }
    


}
}