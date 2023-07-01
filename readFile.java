import java.io.*;

class readFile
{
    public static void main(String arg[]) throws Exception
    {
        FileInputStream fobj = new FileInputStream("cube.java");

        int i = 0;

        while((i = fobj.read())!= -1)
        {
            System.out.print((char)i);

        }
        System.out.println();

       fobj.close();

    }

}