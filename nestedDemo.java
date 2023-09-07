
// using a nnested loop with labels

class nestedDemo
{
    public  static void main(String arg[])
    {
        int i = 1, j = 0 ;

        ipl:while(i <= 3)
        {
            System.out .print(i);

            ipl2:for(j=1;j<=5;j++)
            {
                System.out.println("\t"+j);
            }
            i++;
            System.out.println("---------------------------------");
        }
    }
}