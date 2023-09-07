
// Accept the string from user

import java.io.*;

class acceptString
{
    public static void main(String arg[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the name : ");

        String str = br.readLine();

        System.out.println("Result : "+str); 
    }
}

//////////////////////////////////////////////////////////////////////////////////
// Result :
//        Input : string
//          Output : Rupesh
///////////////////////////////////////////////////////////////////////////////