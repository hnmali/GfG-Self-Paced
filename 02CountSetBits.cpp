//Count number of set bits in a given number
#include <iostream>
using namespace std;

int countBits(int n) { //Naive solution
    int ans = 0;
    while(n) {
        if (n&1)
            ans++;
        n >>= 1;
    }
    return ans;
}

int countBitsKA(int n) { //Using Kerningam's Algorithm
    int ans = 0;
    while (n) {
        n = n & (n-1);
        ans++;
    }
    return ans;
}

//Using Lookup Table
int table[256];
void intialize() {
    table[0] = 0;
    for (int i = 1; i < 256; i++)
        table[i] = (i&1) + table[i/2];
}
int countBitsLT(int n) { 
    int ans = table[n & 0xff]; //Hexadecimal Representation of 8 set-bits
    n >>= 8;
    ans += table[n & 0xff];
    n >>= 8;
    ans += table[n & 0xff];
    n >>= 8;
    ans += table[n & 0xff];
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << countBits(n) << "\n";
    cout << countBitsKA(n) << "\n";
    intialize();
    cout << countBitsLT(n) << "\n";
    return 0;
}