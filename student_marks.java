// display the student marks and percentage of those student

import java.io.*;

class student_marks
{
    public static void main(String arg[]) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("How many subject : ");

        int n = Integer.parseInt(br.readLine());

        // create the 1D [] array with size n
        int[] marks = new  int[5];

        int i  = 0;

        for(i=1;i<=n;i++)
        {
            System.out.println("Enter the marks : ");
            marks[i] = Integer.parseInt(br.readLine());

        }

        // find total marks
        int total_marks = 0;

        for(int icnt =0;icnt<=n;icnt++)
        
        total_marks = total_marks + marks[icnt];

        System.out.println("Total Marks : "+total_marks);

        // find percrentage
        float percentage = (float)total_marks/n;
        System.out.println("percentage :"+percentage);

    }
}