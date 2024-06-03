//You will be given a number and you have to count number of digits in it.
#include<iostream>

using namespace std;

int countDigits(int n) {
    int ans = 0;
    while (n) {
        n /= 10;
        ans++;
    }
    return ans;
}

int main () {
    int n;
    cin >> n;
    cout << countDigits(n);
    return 0;
}