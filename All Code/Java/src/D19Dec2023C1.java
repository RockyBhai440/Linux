/*
 * Try the private access modifier..
 */

class A{
    int input1=5;
    private String myString="CSECU";
    void show(){
        System.out.println("Showa");
    }
}

class B extends A{
    
    void show(){
        super.show();
        System.out.println("Showb");
    }
}

class C extends A{
    void show(){
        super.show();
        System.out.println("Showc");
    }
}

public class D19Dec2023C1 {
    public static void main(String[] args) {
        A obj = new A();
        obj.show();
    }
}
