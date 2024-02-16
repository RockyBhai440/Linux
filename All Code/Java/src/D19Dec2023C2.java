/*
 * Instance Variable 
 * Class Variable
 */

class myclass{
    String myname = "CSECU";    // Instance Variable
    static int input = 1;       //Class Variavle
    void show(){
        int var1 = 5;           // Local Variable.
        System.out.println(var1);
    }
}
public class D19Dec2023C2 {
    public static void main(String[] args) {
        myclass obj = new myclass();
        // System.out.println(myclass.myname); //can't Access without object
        System.out.println(obj.myname);     
        System.out.println(myclass.input);  //can Access without object
        myclass.input = 5;

    }
}
