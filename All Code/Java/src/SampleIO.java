import java.util.Scanner;

public class SampleIO {
    public static void main(String[] args) {
        System.out.println("Enter Two Numbers: ");
        Scanner sc = new Scanner(System.in);
        int a, b;
        a = sc.nextInt();
        b = sc.nextInt();
        int sum = a+b;
        System.out.println("Sum = " + sum);
        sc.close();

    }
}
