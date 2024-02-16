/*
 * Inheritence
 */

// import javax.sound.midi.Soundbank;

// class A{
//     int input1=5;
//     String myString="CSECU";
//     void show(){
//         System.out.println("Showa");
//     }
// }

class A{
    int input1=5;
    String myString="CSECU"; 
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

public class D18Dec2023C4 {
    public static void main(String[] args) {
        // A obj = new A();
        // B obj1 = new B();
        C obj2 = new C();
        obj2.show();
    }
}
