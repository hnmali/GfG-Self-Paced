void reverse(vector<int>& arr) {
    for(int i = 0, j = arr.size()-1; i < j; i++, j--) 
        swap(arr[i],arr[j]);
}
