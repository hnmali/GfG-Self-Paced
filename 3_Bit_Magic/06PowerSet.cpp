//Generate Power set using Bitwise Operator
#include <iostream>
#include <cmath>
using namespace std;

void printPowerSet (string str) {
    int n = str.length();
    int powSize = pow(2,n);
    for (int i = 0; i < powSize; i++) {
        for (int j = 0; j < n; j++) {
            if (i & (1<<j))
                cout << str[j];
        }
        cout << "\n";
    }
    return;
}

int main() {
    string str;
    cin >> str;
    printPowerSet(str);
    return 0;
}