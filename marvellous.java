import java.util.Scanner;

class loop
{
    public void Display(int ino)
    {
        for(int i = 1;i<=ino;i++)
        {
            System.out.println("Marveellou...");
        }
    }
}

class marvellous
{
    public static void main(String arg[])
    {
        int i;
        Scanner sobj = new Scanner(System.in);
        System.out.println("enter the no :");
        i = sobj.nextInt();

        loop obj = new loop();

        obj.Display(i);

    }
}