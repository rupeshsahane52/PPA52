
// check the leap year or no

import java.io.*;

class checkLeapYear
{
    public static void main(String arg[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the Year :  ");

        int year = Integer.parseInt(br.readLine());

        if(year % 100 == 0 && year % 400 == 0)
        {
            System.out.println(year+" is a leap year");
        }
        else if (year % 100 != 0 && year % 400 ==0)
        {
             System.out.println(year+" is a leap year");   
        }
        else
        {
             System.out.println(year+" is a  not leap year");
        }

    }
}

///////////////////////////////////////////////////////////////////////////
//
//    Result : 2002 is leap Year
//              2023 is not leap year
/////////////////////////////////////////////////////////////////////////