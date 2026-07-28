//contains duplicate
#include<bits/stdc++.h>
using namespace std;
bool containsDupe(vector<int> &nums){
    int n = nums.size();
    unordered_set<int> st;
    for(int num : nums){
        if(st.count(num)){
            return true;
        } st.insert(num);
    }
    return false;
}
int main(){
    int n ;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    cout<<boolalpha<<containsDupe(nums);
    return 0;
}