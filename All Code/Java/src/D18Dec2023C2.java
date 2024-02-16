/*
 * Polymorphism.
 */

class TestDemo{
    void test(){
        System.out.println("No Parameters");
    }
    void test(int a){
        System.out.println("a = " + a);
    }
    void test(int a, double b){
        System.out.println("a " + a + " b = " + b);
    }
}

public class D18Dec2023C2 {
    public static void main(String[] args) {
        TestDemo myl = new TestDemo();
        myl.test();
        myl.test(5);
        myl.test(5, 8.5);
    }    
}
