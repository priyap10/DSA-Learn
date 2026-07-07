//insertion_sort
//time complexity: 
// worst case: O(n^2)
//Average Case : O(n^2)
//Best Case : O(n)

#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int> &nums, int n){
    for(int i = 0; i<=n-1; i++){
        int j = i;
        while(j>0 && nums[j]<nums[j-1]){
            swap(nums[j], nums[j-1]);
            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    insertion_sort(nums, n);
    for(int i  = 0; i<n ; i++){
        cout<<nums[i];
    }
    return 0;
}