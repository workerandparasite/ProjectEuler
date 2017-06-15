#include <iostream>

using namespace std;

long long sum_square_difference (long long n) {
    long long s1 = (n*(n+1)/2)*(n*(n+1)/2);
    long long s2 = ((n)*(n+1)*(2*n+1))/6;
    return s1-s2;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        cout << sum_square_difference(n) << endl;
    }
    return 0;
}
