
// Accept the no from user

import java.io.*;

class acceptInt

{
    public static void main(String[] arg) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the no : ");

        int a = Integer.parseInt(br.readLine());

        System.out.println("Result : "+a);
    }
}

////////////////////////////////////////////////////////////////////////////////////
// Result :
// Input : 11
// Output : Result :11
////////////////////////////////////////////////////////////////////////////////////