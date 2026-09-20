//Striver - Recursion - Practice - Backtracking
#include<bits/stdc++.h>
using namespace std;
//Print name N times
void f1(int i, int n){
    if(i>n) return;
    cout<<"Priya S"<<" ";
    f1(i+1, n);
}
//Print Linearly from 1 to N
void f2(int i, int n){
    if(i>n) return;
    cout<<i<<" ";
    f2(i+1,n);
}
//Print from N to 1
void f3(int i, int n){
    if(i<1) return;
    cout<<i<<" ";
    f3(i-1,n);
}
//Print Linearly from 1 to N - Backtracking
void f4(int i, int n){
    if(i<1) return;
    f4(i-1,n);
    cout<<i<<" ";
}
//Print from N to 1 - Backtracking
void f5(int i, int n){
    if(i>n) return;
    f5(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    f1(1, n);
    cout<<endl;
    f2(1,n);
    cout<<endl;
    f3(n,n);
    cout<<endl;
    f4(n,n);
    cout<<endl;
    f5(1,n);
    cout<<endl;
    return 0;
}