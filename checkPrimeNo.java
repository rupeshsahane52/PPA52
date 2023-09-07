import java.util.Scanner;

class checkPrimeNo
{
    public static void main(String arg[])
    {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the No :\n");

        int start = sc.nextInt();

        int end = sc.nextInt();

        System.out.println("List of prime no between "+start+ " \t" +end);

        for(int i = start;i<=end;i++)
        {
            if(isPrime(i))
            {
                System.out.println(i);
            }
        }
    }
    public static boolean isPrime(int n)
{
    if(n <= 1)
    {
        return false;
    }

for(int i = 2;i<=Math.sqrt(n);i++)
    {
        if(n % i == 0 )
        {
            return false;
        }        
        
    }
    return true;

}
    
}

