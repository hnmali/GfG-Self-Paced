//Calculate LCM of two numbers
#include<iostream>
using namespace std;

//Euclidean Algorithim
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b,a%b);
}// TC: O(log(min(a,b)))

int main() {
    int a, b;
    cin >> a >> b;
    cout << (a*b)/gcd(a,b); //LCM
    return 0;
}