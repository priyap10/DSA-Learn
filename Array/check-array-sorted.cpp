//check if array is sorted
#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &nums, int n){
    for(int i = 1; i<n; i++){
        if(nums[i-1]>nums[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    cout<<boolalpha<<isSorted(nums, n);
    //boolalpha is used to return true or false in case the program keeps returning 1 for true and 0 for false.
    return 0;
}