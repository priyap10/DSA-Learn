//BASIC MATHS 
//SET 2 PRACTICE QUESTIONS
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
    cout<<endl;
}
int lcm(int a, int b){
    return ( a / gcd(a,b) )* b ;
    cout<<endl;
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<gcd(a, b)<<endl;
    cout<<lcm(a,b)<<endl;
    return 0;
}