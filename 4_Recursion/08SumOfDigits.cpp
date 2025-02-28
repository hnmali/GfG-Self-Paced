int getSum (int n) {
    if(n <= 9)
        return n;
    return getSum(n/10) + n%10;
}
