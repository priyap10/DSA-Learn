//STRIVER - PARAMETERISED & FUNCTIONAL RECURSION
#include<bits/stdc++.h>
using namespace std;
//print sum of first n natural numbers (parameterised)
void f1(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    f1(i-1, sum+i);
}
//sum of first  n natural numbers (functional)
int f2(int n){
    if(n==0){
        return 0;
    }
    return n + f2(n-1);
}
int main(){
    int n;
    cin>>n;
    f1(n, 0);
    cout<<endl;
    cout<<f2(n);
    cout<<endl;
    return 0;
}