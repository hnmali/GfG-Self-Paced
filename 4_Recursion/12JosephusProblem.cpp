int jos(int n, int k) {
    if(n == 1)
        return 0;
    return (jos(n-1,k)+k)%n);
}
