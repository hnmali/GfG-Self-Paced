#include <iostream>
#include <vector>
using namespace std;

//A array consist of all numbers apprearing even number of times except one, find that number
int oddOccuringNumber(vector<int>& arr, int n) {
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans ^= arr[i];
    return ans;
}

//A array consist of number from 1 to n+1, and 1 number is missing from this range find that number
int missingNumber(vector<int>& arr, int n) {
    int ans = 0;
    for (int i = 1; i <= n+1; i++)
        ans ^= i;
    for (int i = 0; i < n; i++)
        ans ^= arr[i];
    return ans;
}

int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << oddOccuringNumber(arr, n) << "\n";
    cout << missingNumber(arr, n) << "\n";
    return 0;
}