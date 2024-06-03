//Print all prime numbers before n using Sieve of Eratoshthenes
#include<iostream>
#include<vector>
using namespace std;

void sieve(int n) {
    vector<bool> isPrime(n+1,true);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
            for (int j = 2*i; j <= n; j+=i)
                isPrime[j] = false;
        }
    }
    return;
}

int main() {
    int n;
    cin >> n;
    sieve(n);
    return 0;
}