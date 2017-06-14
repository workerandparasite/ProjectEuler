import java.util.*;

public class LargestPrimeFactor {
    public static long largestPrimeFactor (long n) {
        long max = 1;
        long d = 2;
        while (d*d <= n)
        {
            while ((n % d) == 0)
            {
                max = d;
                n /= d;
            }
            
            d++;
        }
        if (n > 1)
            max = n;
        return max;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long n = in.nextLong();
            System.out.println(largestPrimeFactor(n));
        }
    }
}
