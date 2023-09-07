

class valueDemo
{
    static int mymethod(int num)
    {
        return num*num; // returns the square of values
    }

    public static void main(String arg[])
    {
        int result   = valueDemo.mymethod(5);

        System.out.println("Result ="+result);
    }
}
///////////////////////////////////////////////////////////////////////
// Result 
//              input = 5 
//              output = 25
///////////////////////////////////////////////////////////////////////