
class square2
{
    public static void main(String arg[])
    {
        int n= 5;

        for(int i = 1;i<=n;i++)
        {
            for(int j= i;j<=n;j++)
            {
                if(i % 2 == 0)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("&\t");
                }
            }
            System.out.println();
        }
    }
}