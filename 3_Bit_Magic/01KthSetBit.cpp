//Check if k-th bit is set or not
#include <iostream>
using namespace std;

bool usingRightShift(int n, int k) {
    while(--k) 
        n >>= 1;
    return n&1;
}
bool usingLeftShift(int n, int k) {
    int temp = 1;
    while(--k)
        temp <<= 1;
    return n&temp;
}
int main () {
    int n, k;
    cin >> n >> k;
    cout << usingRightShift(n,k) << "\n";
    cout << usingLeftShift(n,k) << "\n";
    return 0;
}