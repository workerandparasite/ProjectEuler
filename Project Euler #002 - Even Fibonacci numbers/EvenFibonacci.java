import java.util.*;

public class EvenFibonacci {
    public static long fastEvenFibonacci (long k) {
        long result = 0;
        long a = 0;
        long b = 2;
        long x = a;

        while (x < k) {
            result += x;
            long next = (4*b) + a;
            x = a;
            a = b;
            b = next;
        }
        
        return result;
    }

    public static long naiveEvenFibonacci (long k) {
        long result = 0;
        long a = 1;
        long b = 2;
        long x = a;

        while (x < k) {
            if ((x % 2) == 0)
                result += x;
            long next = a + b;
            x = a = b;
            b = next;
        }
        
        return result;
    }
      
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long n = in.nextLong();
            System.out.println(fastEvenFibonacci(n));
        }
    }
}
