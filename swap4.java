// using bitwise opreator

class swap4
{
    public static void main(String arg[])
    {
        int a = 10 , b = 20;

        System.out.println("Before swapping :");
        System.out.println("a = "+a);
        System.out.println("b = "+b);

        a = a ^ b; //10 ^ 20 = 30;
        b = a ^ b; // 30 - 20 = 10;
        a = a ^ b; // 30 - 10 = 20;

         System.out.println("Before swapping :");
        System.out.println("a = "+a);
        System.out.println("b = "+b);
    }
}