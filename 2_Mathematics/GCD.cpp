//Calculate GCD/HCF of two numbers
#include<iostream>
using namespace std;

int gcd (int a, int b) {
    int res = min (a,b);
    while (res > 0) {
        if (a % res == 0 and b % res == 0)
            break;
        res--;
    }
    return res;
}

//Euclidean Algorithim
int optimizedGcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return optimizedGcd(b,a%b);
}// TC: O(log(min(a,b)))

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b);
    return 0;
}