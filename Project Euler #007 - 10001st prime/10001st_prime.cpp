#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long ull;

const ull UPPER_LIMIT= 120000ULL;

std::vector<ull> primes_sieve (ull n) {

    std::vector<bool> not_primes (UPPER_LIMIT, false);
    std::vector<ull> primes;

    for (ull i = 2; i <= UPPER_LIMIT; i++) {
        if (not_primes[i] == false) {
            primes.push_back(i);
            not_primes[i] = true;
            for (ull j = i*i; j <= UPPER_LIMIT; j += i) {
                not_primes[j] = true;
            }
        }
    }

    return primes;
}

int main() {
    ull t;
    vector<ull> primes;
    cin >> t;
    if (t > 0) {
        primes = primes_sieve(UPPER_LIMIT);
    }
    for(int a0 = 0; a0 < t; a0++){
        ull n;
        cin >> n;
        cout << primes[n-1] << endl;
    }
    return 0;
}
