
import java.io.*;
import java.util.*;

class arithmaticExp
{
    public static void main(String arg[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter two no :  ");

        String str = br.readLine();

        StringTokenizer st = new StringTokenizer(str, " ,  ");

        String s1  = st.nextToken();
        String s2 = st.nextToken();

        // trim the spaces

        s1 = s1.trim();
        s2 = s2.trim();


        double n1 = Double.parseDouble(s1);
        double n2 = Double.parseDouble(s2);

        // perform the arithmatic opreations

        System.out.println("Result :   "+(n1 + n2));

        
        System.out.println("Result :   "+(n1 - n2));

        
        System.out.println("Result :   "+(n1 * n2));

        
        System.out.println("Result :   "+(n1 / n2));
        
        


    
    }
}
