void lRotateBy1(vector<int>& arr) {
    int temp = arr[0];
    for(int i = 0; i < arr.size()-1; i++) 
        arr[i] = arr[i+1];
    arr[arr.size()-1] = temp;
}   
