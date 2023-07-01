 class AramStrong
{
    public static void main(String arg[])
    {
        int num = 1 ;
        int no = 0 ;
        
        int temp  = 1;
        {

          num = no;
        }
        while(no != 0)
        {
           int  temp = num % 10;
           int  total = total + temp * temp * temp;
            num = num /10;
        }
        if(total == num)
        {
            System.out.println(num+"No is Aramstrong no");
        }
        else
        {
            System.out.println(num+"is not Armstrong no");
        }
    }
}