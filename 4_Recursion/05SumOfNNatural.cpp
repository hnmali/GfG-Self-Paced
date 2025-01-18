int sumNatural(int n) {
    if(n == 1)
        return 1;
    return n + sumNatural(n-1);
}
