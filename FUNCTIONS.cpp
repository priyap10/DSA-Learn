//Functions : Set of Code Which perform set of instructions. They are use to modularize code
//void function
//return function
//paramterized functions
//non parameterized functions
//pass by reference
//pass  by value - when a variable is paassed onto in a function the copy is passed, not the original variable. so when u cout the variable in the main fuction itself the changes are not made and the variable is printed as it is. this is called as pass by value.
//pass by reference - attach an '&' to the variable in the funtion paramteres. pass by reference actually extracts the adress and passes it to the function performing the code. The actual adress is passed. Then the changes made are shown.
//array is by default passed by reference always rest all data structures u have to explicitly pass them by reference but arrays by default is passed by reference.
#include<bits/stdc++.h>
using namespace std;
void passbyVal(int &n){
    n += 5;
}
void passbyRef(string &s){
    s[5]='S'; //example
   
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    passbyVal(n);
    cout<<n<<endl;
    passbyRef(s);
    cout<<s<<endl;
   
    return 0;
}