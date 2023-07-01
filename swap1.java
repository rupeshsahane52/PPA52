// logic : 1
// using third variable

class swap1
{
    public static void main(String arg[])
    {
        int a = 10,b = 20;
        System.out.print("Before swapping ");
        System.out.println("a= "+a);
        System.out.println("b= "+b);

        int tem = a;
        a= b;
        b= tem;

         System.out.print("After swapping ");
        System.out.println("a= "+a);
        System.out.println("b= "+b);




    }
}