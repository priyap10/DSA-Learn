//valid anagram
#include<bits/stdc++.h>
using namespace std;
bool validAnagram(string s, string t){
    if(s.size()!=t.size()){
        return false;
    }
    vector<int> count(26,0);
    for(int i = 0; i<s.size(); i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }
    for(int i : count){
        if(i!=0){
            return false;
        }
    }return true;
}
int main(){
    string s;
    string t;
    getline(cin, s);
    getline(cin, t);
    cout<<boolalpha<<validAnagram(s, t);
    return 0;
}