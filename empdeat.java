
// Accept the name from user

import java.io.*;

class empdeat
{
    public static void main(String arg[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

         System.out.println("Enter the id :");
         int id  = Integer.parseInt(br.readLine());

         System.out.println("Enter the name : ");
        String name = br.readLine();

         System.out.print("Sex (M/F) :   ");
        String sex = br.readLine();


        System.out.println("Enter the salary :");
        float  salary  = Float.parseFloat(br.readLine());

        System.out.println("id : "+id);
        System.out.println("name : "+name);
        System.out.println("sex(M/F):"+sex);
        System.out.println("salary :"+salary);

    }
}