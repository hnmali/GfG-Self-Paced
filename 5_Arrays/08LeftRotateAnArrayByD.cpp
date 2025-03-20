//Method 1: Brute Force Left rotate by 1 d times


//Method 2: 
void leftRotate(vector<int>& nums, int d) {
    int temp[d];
    for(int i=0; i<d; i++) {
        temp[i] = nums[i];
    }
    for(int i=0; i<nums.size()-d; i++) {
        nums[i-d] = nums[i];
    }
    for(int i=0; i<d; i++) {
        nums[nums.size()-d+i] = temp[i];
    }
}


//Method 3:
void leftRotate(vector<int>& arr, int d) {
    reverse(arr, 0, d-1);
    reverse(arr, d, arr.size()-1);
    reverse(arr, 0, arr.size()-1);
}

void reverse(vector<int>& arr, int start, int end) {
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
