
import java.io.*;

class createfile
{
    public static void main(String arg[]) throws Exception
    {
        File fobj = new File("Fileno1.txt");

        if(fobj.createNewFile())
        {
            System.out.println("File is created Sucessfully...");
        }
        else
        {
            System.out.println("Unable to create file...");
        
        }
        System.out.println("Th size of the file is :"+length());
        
    }
}