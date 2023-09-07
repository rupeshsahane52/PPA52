///////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : use a break statement to go end of block
/////////////////////////////////////////////////////////////////////////////////////////////////

class demoBreak
{
    public static void main(String arg[])
    {
        boolean x = true;

        bl1:{

            bl2:{

                bl3:{

                    System.out.println("Block 3");

                    if(x) break bl2;
                     }
                      System.out.println("Block 2");
               }
                System.out.println("Block 1");


            }
        System.out.println("Out of all block");
    }
}