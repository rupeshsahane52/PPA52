// Display the star in right angle triangle for Nested loop

class rightangle
{
    public static void main(String arg[])
    {
        int r = 5; 

        for(int i = 1 ; i<= r;i++)
        {
            for(int j = 1; j<=i; j++)
            {
                System.out.print(" *\t ");
            }
            System.out.println();
            
        }
       // System.out.println();
    }
}
///////////////////////////////////////////////////////////////////////////////////////////
/* Result :



    *
    * *
    * * *
    * * * *
    * * * * *



 */