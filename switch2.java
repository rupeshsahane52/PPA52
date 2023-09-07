//////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : To display a color name depending on color value
// Input : char
// output : char
/////////////////////////////////////////////////////////////////////////////////////////

class switch2
{
    public static void main(String arg[])
    {
        char color = 'w';

        switch(color)
        {
            
            case 'r' : System.out.println("RED"); 
            break;
            case 'p' : System.out.println("pink");
            break;
            case 'b' : System.out.println("blue"); 
            break;
            case 'w' : System.out.println("white");
            break;

            default : System.out.print("No color");        
            
        } 
    }
}