//remove duplicates from sorted array
//optimal solution
//two pointer approach
//time complexity : O(n)
//space complexity : O(1)
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums, int n){
    int i = 0;
    for(int j = 1; j<n; j++){
        if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n;i++){
        cin>>nums[i];
    }
    cout<<removeDuplicates(nums, n);
    return 0;
}