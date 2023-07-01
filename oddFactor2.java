import java.util.*;

class Number
{
    public void oddFactor2(int ino)
    {
        int icnt  = 0;

        for(icnt = 1;icnt<=(ino/2);icnt++)
        {
            if(((ino % icnt) == 0)&&(icnt % 2)==0)
            {
                System.out.println("Even no is : "+icnt);
            }
        }
    }
}

class oddFactor2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);


        System.out.println("Enter the no :");
        int iNo = sobj.nextInt();

          Number nobj = new Number();


          nobj.oddFactor2(iNo);
    }
}