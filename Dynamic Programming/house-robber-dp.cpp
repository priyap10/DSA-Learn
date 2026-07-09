//198. House Robber
//Dynamic Programming
//Leetcode & Neetcode
//Optimal Solution
#include<bits/stdc++.h>
using namespace std;
int rob(vector<int>& nums) {
    int n = nums.size();
    if(n == 1) return nums[0];
    int prev2 = nums[0];
    int prev = max(nums[1], nums[0]);
    for(int i = 2; i<n; i++){
        int skip = prev;
        int rob = nums[i] + prev2;
        int curri = max(skip, rob);
        prev2 = prev;
        prev = curri;
    }
    return prev;
}
int main(){
    int n ;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    cout<<rob(nums);
    return 0;
}
