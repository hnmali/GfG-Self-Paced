//You will be given a number you have to tell how much trailing zeros will be in factorial of that number
#include<iostream>
using namespace std;

int countTrailingZeros(int n) {
    int res = 0;
    for (int i = 5; i <= n; i *= 5) 
        res += (n/i);
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << countTrailingZeros(n);
    return 0;
}