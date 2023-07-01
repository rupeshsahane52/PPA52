// single line statement

class swap5
{
    public static void main(String arg[])
    {
        int a = 10 , b = 20;

        System.out.println("Before swapping :");
        System.out.println("a = "+a);
  
        System.out.println("b = "+b);

//  <---------------------------
// expresion will start from Right to Left
        b = a + b - (a=b);

        System.out.println("After swapping :");
        System.out.println("a = "+a);
  
        System.out.println("b = "+b);



    }
}