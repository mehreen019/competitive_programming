#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

long long nextPrime(long long n) {
    if (n <= 1) return 2;
    long long prime = n;
    bool found = false;

    while (!found) {
        prime++;
        if (isPrime(prime)) {
            found = true;
        }
    }

    return prime;
}

int main() {
    int t;
    cin >> t;
    vector<long long> results;

    for (int i = 0; i < t; ++i) {
        long long x;
        cin >> x;
        if (x == 2 || x==1) {
            results.push_back(6);
        } else if (x == 3) {
            results.push_back(15);
        } else if (isPrime(x)) {
            long long prime = nextPrime(x);
            results.push_back(x * prime);
        } else {
            long long firstPrime = nextPrime(x);
            long long secondPrime = nextPrime(firstPrime);
            results.push_back(firstPrime * secondPrime);
        }
    }

    for (const auto& result : results) {
        cout << result << endl;
    }

    return 0;
}
