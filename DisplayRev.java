import java.util.Scanner;



class DisplayRev
{

     public  int DisplayRev()
    {
        
        int i = 0;
        for(i = 5;i>1;i--)
        {
            System.out.println(i);
        }
        return i;
    }

    public static void main(String arg[])
    {
       
        int i;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the char : ");
         i = sobj.nextLine();

        
    }
}


