import java.util.*;

public class SumSquareDifference {

    public static long getSumSquareDifference (long n) {
        long s1 = (n*(n+1)/2)*(n*(n+1)/2);
        long s2 = ((n)*(n+1)*(2*n+1))/6;
        return s1-s2;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long n = in.nextLong();
            System.out.println(getSumSquareDifference(n));
        }
    }
}
