//PROBLEM SOLVING PRACTICE
//BASIC PROBLEMS
#include<bits/stdc++.h>
using namespace std;

void countDigits(int n){
    int count = 0;
    while(n!=0){
        count++;
        n/=10;
    }
    cout<<count<<endl;
}
int revNumber(int n){
    int rev = 0;
    while(n!=0){
        int digit = n%10;
        if(rev> INT_MAX/10 || rev < INT_MIN/10){
            return 0;
        }
        rev = rev * 10 + digit;
        n/=10;
    }
    return rev;
    //palindrome is same
}
bool ArmstrongNumber(int n){
    int sum = 0;
    int count = 0;
    int dup = n;
    while(n!=0){
        count++;
        n/=10;
    }
    while(n!=0){
        int digit = n%10;
        sum+=pow(digit, count);
        n/=10;
    }
    if(sum == dup){
        return true;
    } else{
        return false;
    }
    return true;
}
bool primeNo(int n){
    int cnt = 0;
    for(int i = 1; i*i<n; i++){
        if(n%i==0){
            cnt++;
        } if((n/i)!=i){
            cnt++;
        }
    }
    if(cnt!=2){
        return false;
    } else{
        return true;
    }
    return true;
}
void printAllDivisors(int n){
    vector<int> pod;
    for(int i = 1; i*i<=n; i++){
        if(n%i==0){
            pod.push_back(i);
         if((n/i)!=i){
            pod.push_back(n/i);
        }}
    }
    for(auto it : pod){
        cout<<it<<" ";
    } // u can sort it first and then output
}

int main(){
    int n;
    cin>>n;
    countDigits(n);
    cout<<revNumber(n)<<endl;
    cout<<boolalpha<<ArmstrongNumber(n)<<endl;
    // cout<<boolalpha<<primeNo(n)<<endl;
    printAllDivisors(n);
    return 0;
}