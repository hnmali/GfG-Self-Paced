//You will be given a number you have to tell whether the number is palindrome or not.
#include<iostream>
using namespace std;

bool checkPalindrome(int n) {
    int nCopy = n, nRev = 0;
    while (n) {
        int rem = n % 10;
        nRev = nRev*10 + rem;
        n /= 10;
    }
    return (nRev == nCopy);
}

int main() {
    int n;
    cin >> n;
    cout << checkPalindrome(n);
    return 0;
}