//////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : To display a color name depending on color value
// Input : char
// output : char
/////////////////////////////////////////////////////////////////////////////////////////

class switch1
{
    public static void main(String arg[])
    {
        char color = 'w';

        switch(color)
        {
            
            case 'r' : System.out.println("RED"); 
            case 'p' : System.out.println("pink"); 
            case 'b' : System.out.println("blue"); 
            case 'w' : System.out.println("white");

            default : System.out.print("No color");        
            
        } 
    }
}