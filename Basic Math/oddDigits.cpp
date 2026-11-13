#include<bits/stdc++.h>
using namespace std;
//count all odd digits in a number
int countDigits(int n){
    int count = 0;
    while(n>0){
        int lastD = n%10;
        if(lastD%2!=0){
            count++;
        }
        n /= 10;
    } return count;
}
int main(){
    int n;
    cin>>n;
    cout<<countDigits(n);
    return 0;
}