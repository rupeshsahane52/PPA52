import java.io.*;

class writeFile
{
    public static void main(String arg[]) throws Exception
    {
        FileOutputStream  fobj = new FileOutputStream("Fileno2.txt");
        
        String data = "Jay Ganesh";

        byte bdata[] = data.getBytes();

        fobj.write(bdata);

        fobj.close();
    }
}