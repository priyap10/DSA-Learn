//selection sort

#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int> &nums, int n){
    for(int i = 0; i<=n-2; i++){
        int mini= i;
        for(int j = i; j<=n-1; j++){
            if(nums[mini]>nums[j]){
                mini = j;
            }
        }
        swap(nums[mini],nums[i]);
    }
}
int main(){
    int n=0;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    selection_sort(nums, n);
    for(int i = 0; i<n; i++){
        cout<<nums[i];
    }
    return 0;
}