//Brute Force using a extra array

//Efficient
int remDups(int arr[], int n) {
	int res = 1;
	for(int i = 0; i < n; i++) {
		if(arr[i] != arr[res-1]) {
			arr[res] = arr[i];
			res++;
		}
	}
	return res;
}
