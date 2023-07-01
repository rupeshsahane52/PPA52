import java.util.*;

class Number
{
    public void oddFactors(int ino)
    {
        int icnt = 0;

        for(icnt  = 1;icnt <= ino;icnt++)
        {
            if(ino % icnt == 0)
            {
                if(icnt % 2 != 0)
                {
                    System.out.println("Odd factros are : "+icnt);
                }
            }
        }
    }
}

class oddFactors
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the no :");

        Number nobj = new Number();
        int ino = sobj.nextInt();

        nobj.oddFactors(ino);
    }
}