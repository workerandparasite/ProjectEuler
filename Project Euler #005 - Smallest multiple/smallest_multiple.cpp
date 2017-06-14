#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b > 0) {
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}

int smallest_multiple(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++) {
        res = (i*(res))/gcd(i,res);
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << smallest_multiple(n) << endl;
    }
    return 0;
}
