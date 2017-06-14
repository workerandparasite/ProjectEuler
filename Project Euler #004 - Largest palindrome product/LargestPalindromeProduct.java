import java.util.*;

public class LargestPalindromeProduct {
    public static long largestPalindromeProduct (long n) {
        int largest_palin = 0; 
        for (int i = 999; i >= 100; i--)
            for (int j = 999; j >= i-1; j--)
            {
                int v = i*j;
                if (v >= n)
                    continue;
                if (v <= largest_palin)
                    break;
                String str = String.format("%06d", v);
                boolean reverse = true;
                for (int left = 0, right = str.length()-1; left < right; left++, right--)
                    if (str.charAt(left) != str.charAt(right))
                        reverse = false;
                if (reverse)
                    largest_palin = v;
            }
        return largest_palin;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long n = in.nextLong();
            System.out.println(largestPalindromeProduct(n));
        }
    }
}
