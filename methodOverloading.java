class method
{
    
     int add(int a, int b)
        {
            int ans = a + b;
            System.out.println("Result ="+ans);
            return ans;
        }
    int add(int a, int b,int c)
        {
            int ans = a + b + c;
            System.out.println("Result ="+ans);
            return ans;
        }
}

class methodOverloading
{
    public static void main(String arg[])
    {
        method mobj = new method();
        mobj.add(11,10);
        mobj.add(40,1,10);
    }
}