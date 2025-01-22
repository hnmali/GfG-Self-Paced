bool isPalindrome(string str, int l, int r) {
    if(l >= r)
        return true;
    return (str[l] == str[r]) && isPalindrome(str,l+1,r-1);
}
