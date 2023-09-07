// check fibbonaci no 
// input : 0 ,1,1,2,3,5,8,13
// Output : Fiboonaci

import java.io.*;

class checkFiboNo
{
    public static void main(String arg[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the no : ");

        int n = Integer.parseInt(br.readLine());

        long f1 = 0, f2 = 1;

        System.out.println(f1);
        System.out.println(f2);

        // find next fibbonaci
        long f = f1 + f2;

        System.out.println(f);

        // Already 3 fibbonaci no is displayed .so count will start at 3

        int count = 3;

        while(count < n)
        {
            f1 = f2;

            f2 = f;

            f = f1 + f2;

            System.out.println(f);

            count++;
        }
    }
}


////////////////////////////////////////////////////////////////////////////////
// // input : 0 ,1,1,2,3,5,8,13
// Output : Fiboonaci no 
////////////////////////////////////////////////////////////////////////////////