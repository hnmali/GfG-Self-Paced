void print1ToN(int n) {
    if(n == 0)
        return;
    print1ToN(n-1);
    cout << n << '\n';
}
