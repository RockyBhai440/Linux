/*
 * Method Overloading in a Equation
 */

// import java.security.DrbgParameters.Reseed;
// import java.util.Scanner;

// import javax.naming.spi.DirStateFactory.Result;

// class math{
//     double root(double a){
//         double r = Math.sqrt(a);
//         return r;
//     }
//     double square(double b){
//         return b*b;
//     }
// }

// public class D18Dec2023C3 {
//     public static void main(String[] args) {
//         System.out.println("Enter the value of t and x: ");
//         Scanner sc = new Scanner(System.in);
//         double t, x;
//         t = sc.nextDouble();
//         x = sc.nextDouble();
//         double ans;
//         math obj = new math();
//         // double w = obj.square(t);
//         // double y = obj.root(t);
//         // ans = obj.root((6*w)/(y+x));
//         ans = obj.root((6*obj.square(t))/(obj.root(t)+x));
//         System.out.println(ans);
//     }
// }

class math{
    void Result(){
        System.out.println("No parameter");
    }
    void Result(int a, int b){
        double result = Math.sqrt((6*a*a)/((Math.sqrt(a))+b));
        System.out.println(result);
    }
    void Result(double a, double b){
        double result = Math.sqrt((6*a*a)/((Math.sqrt(a))+b));
        System.out.println(result);
    }
    void Result(int a, double b){
        double result = Math.sqrt((6*a*a)/((Math.sqrt(a))+b));
        System.out.println(result);
    }
    void Result(double a, int b){
        double result = Math.sqrt((6*a*a)/((Math.sqrt(a))+b));
        System.out.println(result);
    }
}

public class D18Dec2023C3 {
    public static void main(String[] args) {
        math obj = new math();
        obj.Result();
        obj.Result(6, 9);
        obj.Result(6.5, 9.5);
        obj.Result(6, 9.5);
        obj.Result(6.5, 9);
    }
}