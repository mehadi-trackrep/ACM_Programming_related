
package u10696_or;

import java.math.*;
import java.util.*;

public class U10696_or {

    public static long f91(long n)
    {
        System.out.println(n);
        if(n >= 101) return (n-10);
        return f91(f91(n+11));
    }

    public static void main(String[] args) {

        long res;
        int n;

        long[] dp = new long[1000005];

        for(int i=1; i<=1000000; i++) dp[i] = f91(i);

        Scanner in = new Scanner (System.in);

        while(in.hasNext())
        {
            n = in.nextInt();

            if(n == 0) break;
            else
            {
                System.out.println(dp[n]);
                res = dp[n];
                System.out.printf("f91(%d) = %d\n",n,res);      /// for long , int er jonno format specifier hocce '%d'
            }
        }
    }

}

