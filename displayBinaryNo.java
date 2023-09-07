
// display binary number in other number system

class displayBinaryNo
{
    public static void main(String args[])
    {
        int no = 0b1010;

        System.out.printf("In decimal : %d\n",+no);

        System.out.printf("In octal :%o\n",+no);

     System.out.printf("In hexadecimal :%x\n",+no);

        System.out.printf("In Binaray = %s\n",Integer.toBinaryString(no));


    }
}