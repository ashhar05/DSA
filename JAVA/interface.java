interface MyInterface {
    // Abstract method
    void add();

    // Default method
    default void display() {
        System.out.println("This is a default method.");
    }

    // Static method
    static void show() {
        System.out.println("This is a static method.");
    }
}

class Demo implements MyInterface {
    // Implementing abstract method
    public void add() {
        int a = 10, b = 20;
        System.out.println("Sum = " + (a + b));
    }
}

public class Main {
    public static void main(String[] args) {
        Demo obj = new Demo();

        obj.add();
        obj.display();

        MyInterface.show();
    }
}