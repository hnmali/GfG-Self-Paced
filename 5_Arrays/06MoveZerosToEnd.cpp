//Naive Solution
void moveZeros(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 0) {
            for(int j = i+1; j < arr.size(); j++)
                if(arr[j] != 0)
                    swap(arr[i], arr[j]);
        }
    }
}


//Efiicient Solution
void moveZeros(vector<int>& arr) {
    int cnt = 0;
    for(int i = 0; i < arr.size(); i++) 
        if(arr[i] != 0)
            swap(arr[i], arr[cnt++]);
}
