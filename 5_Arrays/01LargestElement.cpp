int largest(vector<int>& arr) {
    int maxm = arr[0];
    for(int i = 1; i < arr.size(); i++)
        maxm = max(arr[i],maxm);
    return maxm;
}
