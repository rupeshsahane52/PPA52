// logic : 3
// using the multilpication and division oprators

class swap3
{

    public static void main(String arg[])
    {
        int a = 10, b= 20;

        System.out.println("Before swapping :");
        System.out.println("a = "+a);
        System.out.println("b = "+b);


        a = a * b ; // 10 * 20 = 200
        b = a/b;    // 200/20 = 10;
        a = a/b;   // 200/10 = 20;

        System.out.println("After swapping :");
        System.out.println("a = "+a);
        System.out.println("b = "+b);



    }

}