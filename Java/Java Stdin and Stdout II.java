

import java.util.Scanner;

public class stdout{

public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        double y=sc.nextDouble();
         sc.nextLine();              // gets rid of the pesky newline
        String s = sc.nextLine();
        sc.close();

        System.out.println("String: "+s);
        System.out.println("Double: "+y);
        System.out.println("Int: "+x);
}
}
