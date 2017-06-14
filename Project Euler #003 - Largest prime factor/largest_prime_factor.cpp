#include <iostream>

using namespace std;

long long largest_prime_factor (long long n)
{
    long long max = 1;
    long long d = 2;
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

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        cout << largest_prime_factor(n) << endl;
    }
    return 0;
}