package test;

abstract class demo{
    abstract void show();
    void display()
    {
        System.out.println("hello");
    }
}
public class test1 extends demo{
    void show()
    {
        System.out.println("hi");
    }
    void sayhello()
    {
        System.out.println("hello");
    }
    public static void main(String args[])
    {
        test1 t=new test1();
        t.show();
        t.display();
        t.sayhello();
    }
}
