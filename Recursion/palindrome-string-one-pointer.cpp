//Plaindrome String - One pointer
#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s, int i){

    int n = s.size();

    if(i >= n/2)
        return true;

    if(s[i] != s[n-i-1])
        return false;

    return palindrome(s, i+1);
}
int main(){

    string s;
    cin >> s;

    cout << checkPalindrome(s, 0, s.size()-1);

    return 0;
}