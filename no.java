// finalize method

class no
{
    protected void finalize()
    {
        System.out.print("finalize method called ");
    }
    public static void main(String arg[])
    {
        no obj=new no();
        System.out.print(obj.hashCode());
        obj  = null;
        System.gc(); //garbage collector
        System.out.println("\nend of garbage collection");
    }
}