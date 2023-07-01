import java.util.*;

class Numbers
{
    public void evenFactors(int iNo)
    {
        int icnt = 0;

        for(icnt = 1;icnt<=(iNo/2);icnt++)
        {
            if((iNo % icnt) == 0)
            {
                if((icnt % 2) == 0)
                {
                    System.out.println("Even Factros are :"+icnt);
                }
            }
        }
    }
}

class evenFactors
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the No : ");
        int ino = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.evenFactors(ino);
    }
}