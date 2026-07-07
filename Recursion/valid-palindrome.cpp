//Valid Palindrome - Optimal
#include <bits/stdc++.h>
using namespace std;

bool palindrome(string &s, int l, int r){

    while(l < r && !isalnum(s[l])){
        l++;
    }

    while(l < r && !isalnum(s[r])){
        r--;
    }

    if(l >= r){
        return true;
    }

  
    if(tolower(s[l]) != tolower(s[r])){
        return false;
    }

    return palindrome(s, l+1, r-1);
}

int main(){

    string s;
    getline(cin, s);

    if(palindrome(s, 0, s.size()-1)){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }

    return 0;
}