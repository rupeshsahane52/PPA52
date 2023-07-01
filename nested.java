//nested class

class outer
{
    int x = 11;
    class inner
    {
        int y = 21;
        void Display()
        {
            System.out.print("x = "+x);
             System.out.print("y = "+y);
        }
    }
    void show()
    {
        inner i = new inner();
        System.out.println("Outer Show");
        i.Display();
    }
}

class nested
{
    public static void main(String arg[])
    {
        outer obj = new outer();
        obj.show();
        
    }
}