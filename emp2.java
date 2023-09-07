
// Tokens of java strings

import java.io.*;
import java.util.*;

class emp2
{
    public static void main(String arg[]) throws IOException
    {
        // To accept data from keyboard
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // ask for a input - sepretd by commas
        System.out.print("Enter name, age, deprt :    ");

        // accept input into string
        String str = br.readLine();


        // use stringTokenizer to split input as commas
        StringTokenizer st = new StringTokenizer(str,",");


        // we will have 3 tokens as string
        String s1 = st.nextToken();
        String s2 = st.nextToken();
        String s3 = st.nextToken();

       //  trim any spaeces before and after
        s1 = s1.trim();
        s2 = s2.trim();
        s3 = s3.trim();

        // convert
        String name = s1;
        int age = Integer.parseInt(s2);
        String deprt = s3;

     // Display result
        System.out.println("Name: "+name);
        System.out.println("age :"+age);
        System.out.println("deprtment :"+deprt);
    }
}