//You will be given a number you have to print its factorial
#include<iostream>
using namespace std;

int fact(int n) {
    if (n == 0)
        return 1;
    int ans = 1;
    for (int i = 2; i <= n; i++)
        ans *= i;
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}