//Find Missing Number
// Bruteforce: iterate throughout the array twice check if j = i
// Better : Hash Maps
//Optimal : Using sum of first natural numbers and then subtracting the //obtained number from the given sum of indices
//Optimal Approach using XOR - (best solution)
//TC: O(n)
#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums, int N){
    int n = N-1;
    int xor1 = 0 ;
    int xor2 = 0;
    for(int i = 0; i<n; i++){
        xor2 = xor2^nums[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}
int main(){
    int n;
    cin>>n; 
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    cout<<missingNumber(nums, n);
    return 0;
}