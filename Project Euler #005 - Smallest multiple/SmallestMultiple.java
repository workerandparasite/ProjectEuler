import java.util.*;

public class SmallestMultiple {

    public static long gcd (long a, long b) {
        while (b > 0) {
            long x = a % b;
            a = b;
            b = x;
        }
        return a;
    }
    
    public static long getSmallestMultiple (long n) {
        long res = 1;
        for (long i = 2; i <= n; i++) {
            res = (i*(res))/gcd(i,res);
        }
        return res;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long n = in.nextLong();
            System.out.println(getSmallestMultiple(n));
        }
    }
}
