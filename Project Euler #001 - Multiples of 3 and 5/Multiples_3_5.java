import java.util.*;

public class Multiples_3_5 {
    
    public static long getMultiples3and5 (long n)
    {
        long three = (n-1)/3;
        long five = (n-1)/5;
        long fifteen = (n-1)/15;
        return (3*(three*(three+1)/2)+5*(five*(five+1)/2)-15*(fifteen*(fifteen+1)/2));
    };
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            System.out.println(getMultiples3and5(n));
        }
    };
}
