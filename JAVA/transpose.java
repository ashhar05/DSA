import java.util.*;
class topper
{   
    Scanner sc=new Scanner(System.in);
    void accept()
    {  
        int m,n;
        System.out.println("Enter the number of rows");
        m=sc.nextInt();
        System.out.println("Enter the number of columns");
        n=sc.nextInt();
        int arr[][]=new int[m][n];
        int i,j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                System.out.println("Enter matrix element");
                arr[i][j]=sc.nextInt();
            }
            
        }
    }
    void display()
    {
        System.out.println("\fGiven Matrix:");
    int i,j;
     for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                System.out.print(arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    void show_transpose()
    {
        System.out.println("Transpose of the given matrix:");
    int i,j;
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                System.out.print(arr[j][i]+"\t");
            }
            System.out.println();
            }
    }
    public static void main()
    {
        topper obj=new topper();
        obj.accept();
        obj.display();
        obj.show_transpose();
    }
}