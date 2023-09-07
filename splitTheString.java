import java.util.Scanner;

class splitTheString
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");

        String str  = sobj.nextLine();
        
        String Arr[] = str.split("");

        System.out.println("No of Words are :"+Arr.length);
    }
}
