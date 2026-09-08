//KNOW BASIC MATHS
//Perfect Numbers are the ones which have the sum of all its perfect divisors as the number itself
//Strong Number = Sum 0f factroials of all digits = number itself
#include<bits/stdc++.h>
using namespace std;
string convertDecimaltoBinary(int n){
     string binary = "";
    while(n!=0){
        int remainder = n%2;
        binary += to_string(remainder);
        n/=2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
 }
int main(){
    int n;
    cin>>n;
    cout<<convertDecimaltoBinary(n);
    return 0;
}
