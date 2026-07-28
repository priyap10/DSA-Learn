//Basic Maths
//extract last digits
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int last_digit;
    while(n>0){
        last_digit = n%10;
        cout<<"Last Digit: "<<last_digit<<endl;
        n/=10;
    }
     
    return 0;
    
}