//BASIC MATHS 
#include<bits/stdc++.h>
using namespace std;
bool armstrongNumbers(){
    // NUMBER EXTRACTING TECHNIQUE
    int n;
    cin>>n;
    int dup = n;
    int count = 0;
    int sum = 0;
    while(n!=0){
        count++;
        n/=10;
    }
    n = dup;
    while(n!=0){
        int digit = n%10;
        sum += pow(digit, count);
        n/=10;
    }
    if(sum == dup){
        return true;
    } else{
        return false;
    }
    return true;
}
void allDivisors(){
    //print all divisors
    vector<int> ls;
    int n;
    cin>>n;
    //O(sqrt(n)) 
    for(int i = 1; i*i<=n; i++){
        if(n%i == 0){
            ls.push_back(i);
            if((n/i) != i){
            ls.push_back(n/i);
        }
        }
        
    }
    //internal sorting: O(n log n) - here n is no. of factors only
    sort(ls.begin(), ls.end());
    //O(n) - here n is again number of factors only 
    for(auto i : ls){
        cout<<i<<endl;
    }
}
bool PrimeNumbers(){
    int cnt = 0;
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        if(n%i == 0){
            cnt++;
        }
    }
    if(cnt>2){
        return false;
    } else{
        return true;
    }
    return true;
}
int main(){
    cout<<boolalpha<<armstrongNumbers();
    allDivisors();
    cout<<boolalpha<<PrimeNumbers();
    return 0;
}