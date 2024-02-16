package D12Feb24;
import java.util.*;

public class ListProblem {
    public static void main(String[] args) {
        // Creating a List
        List<String> a1 = new ArrayList<>();

        // Adding elements in the List
        a1.add("mango");
        a1.add("orange");
        a1.add("mango");
        a1.add("Grapes");
        a1.remove("mango");

        // Iterating the List
        // element using for-each loop
        for(String fruit : a1)
            System.out.println(fruit);
    }
}
