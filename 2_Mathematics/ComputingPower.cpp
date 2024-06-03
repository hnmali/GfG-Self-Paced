//You have to create power function which calculates a ^ b
#include<iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0)
        return 1;
    int temp = power(a,b/2);
    temp *= temp;
    if (b%2 == 0)
        return temp;
    else
        return temp*a;
}// TC: O(log n) ; Aux. Space: O(log n)

int main() {
    int a,b;
    cin >> a >> b;
    cout << power(a,b);
    return 0;
}