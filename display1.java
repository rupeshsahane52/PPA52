

// getting formatted output into a string

class display1
{
    public static void main(String arg[])
    {
        int i = 65;

        String s = "RAM";

        char ch = 'A';

        String str = String.format("i = %d%n s = %s%n ch = %c%n",i,s,ch);

        System.out.println(str);
    }
}