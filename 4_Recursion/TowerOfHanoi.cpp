void TOH(int n , char A, char B, char C) {
    if( n == 1) {
        cout << "Move 1 from " << A << " to " << C << '\n';
        return;
    }
    TOH(n-1, A, C, B);
    cout << "Move " << n << " from " << A << " to " << C << '\n';
    TOH(n-1, B, A, C);
}
