//Check the given number is power of two or not
#include <iostream>
using namespace std;

//Naive Solution
bool isPow2 (int n) {
    if (n == 0)
        return false;
    while(n != 1) {
        if (n%2)
            return false;
        n /= 2;
    }
    return true;
}

//Efficient Solution
bool isPow2K(int n) { //Based on Kerningam's Algo
    if (n == 0)
        return false;
    return ((n&(n-1))==0);
}

int main () {
    int n;
    cin >> n;
    cout << isPow2(n) << "\n";
    cout << isPow2K(n) << "\n";
    return 0;
}