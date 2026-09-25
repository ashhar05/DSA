package test;
interface demo{//in interface all methodss are abstract by default
    void show();
   public abstract void display();
}
public class test2 implements demo{//in interface implements is used instead of extends
    public void show()
    {
        System.out.println("hi");
    }
    public void display()
    {
        System.out.println("hello");
    }
    public static void main(String args[])
    {
        test2 t=new test2();
        t.show();
        t.display();
    }
}
