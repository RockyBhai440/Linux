/*
 * Working With Multiple Class.
 */

import java.util.Scanner;

class A {
    int age = 20;
    String name = "Avro";
    int ID = 22701053; 
    void show(String YourName){
        System.out.println("My Name is: " + YourName);
    }   
}

public class D18Dec2023C1 {
    public static void main(String[] args) {
        System.out.println("CSE CU");
        A objA = new A();
        // objA.show();
        System.out.println(objA.name);
        System.out.println(objA.age);
        System.out.println("Enter Your Name: ");
        Scanner sc = new Scanner(System.in);
        String YourName;
        YourName = sc.nextLine();
        objA.show(YourName);
        sc.close();
    }
}
