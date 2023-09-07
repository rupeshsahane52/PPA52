
class A
{
    A()
    {
        this(20);
        System.out.println(0);
    }
    A(int a)
    {
        this(90.90f);
        System.out.println(6);
    }
     A(float a)
    {
        this(90.90);
        System.out.println(6);
    }
    A(double a)
    {
        System.out.println(17);
    }

    public static void main(String arg[])
    {
        new A();
    }
}