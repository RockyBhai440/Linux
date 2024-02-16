package D29Jan2024;
import java.io.*;
import java.io.IOException;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;

public class OddEven {
    public static void main(String[] args) {
        File inFile = new File("/home/pranto/All Code/Java/src/D29Jan2024/num.txt");
        File oddFile = new File("/home/pranto/All Code/Java/src/D29Jan2024/odd.txt");
        File evenFile = new File("/home/pranto/All Code/Java/src/D29Jan2024/even.txt");
        

        BufferedReader ins = null;
        FileWriter odd = null;
        FileWriter even = null;

        try {
            ins = new BufferedReader(new FileReader(inFile));
            odd = new FileWriter(oddFile);
            even = new FileWriter(evenFile);

        String intr = "";
        String filedata = "";

            while((intr = ins.readLine()) != null) {
                filedata += intr+ " ";
            }

            String delims = " ";
            String[] token = filedata.split(delims);
            int word;
            for(int i=0; i<token.length; i++) {
                word = Integer.parseInt(token[i]);
                if(word%2 == 0)
                    even.write(word+" ");
                else    
                    odd.write(word+" ");
            }
        } catch (Exception e) {
            System.out.println(e);
            System.exit(-1);;
        }

        finally {
            try {
                ins.close();
                odd.close();
                even.close();
            }
            catch(IOException e) {
                System.out.println(e);
            }
        }
    }
}
