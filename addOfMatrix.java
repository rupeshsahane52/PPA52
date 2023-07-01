// step 1 : 

class addOfMatrix
{
    public static void main(String arg[])
    {
        int rows;
        int cols;

        int a[][] = {{1,2,3},{1,2,50},{1,2,3}};
        int b[][] = {{1,2,3},{1,2,3},{1,2,3}};
        
        rows = a.length;
        cols = a[0].length;

        int diff[][] = new int[rows][cols];

        for(int i = 0;i<rows;i++)
        {
            for(int j= 0;j<cols;j++)
            {
                diff[i][j] = a[i][j] + b[i][j];
            }
    
        }
        System.out.print("Addition of two matrix is : \n");
        for(int i = 0;i<rows;i++)
        {
            for(int j = 0;j <cols;j++)
            {
                System.out.print(diff[i][j]+" ");
            }
            System.out.println();
        }
    }

}