#include <iostream>

using namespace std;

unsigned long long int fast_even_fibonacci (const long long k) {
    unsigned long long result = 0;
    unsigned long long a = 0;
    unsigned long long b = 2;
    unsigned long long x = a;

    while (x < k) {
        result += x;
        unsigned long long int next = (4*b) + a;
        x = a;
        a = b;
        b = next;
    }
    
    return result;
}


unsigned long long int naive_even_fibonacci (const unsigned long long k) {
    unsigned long long result = 0;
    unsigned long long a = 1;
    unsigned long long b = 2;
    unsigned long long x = a;

    while (x < k) {
        if ((x % 2) == 0)
            result += x;
        unsigned long long next = a + b;
        x = a = b;
        b = next;
    }
    
    return result;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long int n;
        cin >> n;
        cout << fast_even_fibonacci(n) << endl;
    }
    return 0;
}
