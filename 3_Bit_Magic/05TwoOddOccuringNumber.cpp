//In this all elements of array occurs even number of time except 2 numbers find those 2 numbers.
#include <iostream>
#include <vector>
using namespace std;

void oddAppearing(vector<int>& arr, int n) {
    int XOR = 0, ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++)
        XOR ^= arr[i];
    int sn = XOR & (~(XOR-1));
    for (int i = 0; i < n; i++)
        if ((arr[i]&sn) != 0)
            ans1 ^= arr[i];
        else
            ans2 ^= arr[i];
    cout << ans1 << " " << ans2;
    return;
}

int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    oddAppearing(arr, n);
    return 0;
}