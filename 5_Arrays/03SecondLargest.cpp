//Efficient
int secondLargest(vector<int>& arr, int n) {
    int res = -1, largest = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[largest]) {
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest]) {
            if(res == -1 || arr[i] > arr[res])
                res = i;
    return arr[res];
