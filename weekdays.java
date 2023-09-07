
class weekdays
{
    public static void main(String arg[])
    {
        try{

        String[] days = new String[]
        {"Sunday","Monday","Tuesday","Wedenday","Thursady","Friday","Saturday"};

        int i = 0;

        for(i=1;i<=days.length;i++)
        {
            System.out.println(days[i]);
        }
    }
    catch(Exception e)
    {
        //System.out.println(e);
    }
}
}