//Print all prime factors of a given number
#include<iostream>
using namespace std;

void printPrimeFactors(int n) {
    if (n <= 1)
        return;
    for (int i = 2; i*i <= n; i++) {
        while (n%i == 0) {
            cout << i;
            n /= i;
        }
    }
    if (n>1)
        cout << n;
    return;
}

int main() {
    int n;
    cin >> n;
    printPrimeFactors(n);
    return 0;
}