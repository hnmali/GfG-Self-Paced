//Print all factors or divisiors of a given number
#include<iostream>
using namespace std;

void printDivisor(int n) {
    int i;
    for (i = 1; i*i <= n; i++) {
        if (n%i == 0)
            cout << i << " ";
    }
    for (;i>1; i--) {
        if (n%i == 0)
            cout << n/i << " ";
    }
    return;
}

int main() {
    int n;
    cin >> n;
    printDivisor(n);
    return 0;
}