interface demo {
    abstract void display();
    public abstract void show();
    
}
interface inter{
    abstract void add();
    public abstract void div(); 
}
public class test3 implements demo,inter{
    public void display()
    {
        System.out.println("hello");
    }
    public void show()
    {
        System.out.println("hi");
    }
    public void add()
    {
        System.out.println("addition");
    }
    public void div()
    {
        System.out.println("division");
    }
    public static void main(String args[])
    {
        test3 t=new test3();
        t.display();
        t.show();
        t.add();
        t.div();
    }
}
