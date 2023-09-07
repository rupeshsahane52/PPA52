// Accept the char from keyboard and display on screen

import java.io.*;

class acceptChar
{
    public static void main(String arg[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the char :\t");
        char ch = (char)br.read();

        System.out.println("You entered :"+ch);
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////
// Result : 
// Input : a
// output : you entered a
////////////////////////////////////////////////////////////////////////////////////////////