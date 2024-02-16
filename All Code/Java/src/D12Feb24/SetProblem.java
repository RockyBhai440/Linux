package D12Feb24;
import java.util.*;
import java.util.HashSet;

public class SetProblem {
    public static void main(String[] args) {
        // Set demonstarion using Hashset
        Set<String> set = new HashSet<String>();

        // Adding Elements
        set.add("one");
        set.add("two");
        set.add("three");
        set.add("four");
        set.add("two");
        set.add("five");

        // Set follows unordered way
        System.out.println(set);
    }
}