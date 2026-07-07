//second largest element in an array
//optimal soln
#include<bits/stdc++.h>
using namespace std;
 int secondlargest(vector<int> &nums, int n){
     int largest = nums[0];
     int slargest = INT_MIN;
     for(int i = 0; i<n; i++){
         if(nums[i]>largest){
            slargest = largest;
            largest = nums[i];
         }
     }
     return slargest;
 }
 int main(){
     int n;
     cin>>n;
     vector<int> nums(n);
     for(int i = 0; i<n ; i++){
         cin>>nums[i];
     }
     cout<<secondlargest(nums, n);
     
     return 0;
 }