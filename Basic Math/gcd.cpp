//KNOW BASIC MATHS
//STRIVER
#include<bits/stdc++.h>
using namespace std;
void findGCD(){
    //GREATEST COMMON DIVISOR
    //AKA HCF - HIGHEST COMMON FACTOR
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int gcd = 1;
    for(int i = 1; i<=min(n1,n2); i++){
        //TC - O(min(n1, n2))
        if(n1%i == 0 && n2%i == 0){
            gcd = i;
        }
    }
    cout<<gcd;
}
int main(){
    findGCD();
    return 0;
}