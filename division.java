import java.util.Scanner;

class DivideTwoNo
{
    public void DivideTwoNo(int no1,int no2)
    {
        int Ans ;
        if(no1 == no2)
        {
            System.out.println("No is not Divisbele.....");
          //  return -1;
        }
        Ans = (no1 / no2);
        System.out.println("The Division is :"+Ans);
        
    } 
    
}

class division
{
    public static void main(String arg[])
    {
        int value1 ,value2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no : ");
        value1 = sc.nextInt();
        value2 = sc.nextInt();

        //int i = sc.nextInt();

        DivideTwoNo dobj = new DivideTwoNo();

        dobj.DivideTwoNo(value1,value2);


    }
}