//Union of 2 Sorted Arrays
//Optimal Approach
#include<bits/stdc++.h>
using namespace std;
vector<int> unionOfSortedArrays(vector<int> &nums1, vector<int> &nums2){
    int i = 0;
    int j = 0;
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> unionSet;
    while(i<n1 && j<n2 ){
        if(nums1[i]<nums2[j]){
            if(unionSet.size()==0 || unionSet.back()!=nums1[i]){
                unionSet.push_back(nums1[i]);
            }
            i++;
        }
        else{
            if(unionSet.size()==0 || unionSet.back()!= nums2[j]){
                unionSet.push_back(nums2[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionSet.size()==0 || unionSet.back()!=nums1[i]){
                unionSet.push_back(nums1[i]);
            } i++;
    }
    while(j<n2){
        if(unionSet.size()==0 || unionSet.back()!= nums2[j]){
                unionSet.push_back(nums2[j]);
            } j++;
    }
    return unionSet;
}
int main(){
    int n1;
    cin>>n1;
    vector<int> nums1(n1);
    for(int i = 0; i<n1; i++){
        cin>>nums1[i];
    }
    int n2;
    cin>>n2;
    vector<int> nums2(n2);
    for(int i = 0; i<n2; i++){
        cin>>nums2[i];
    }
    vector<int> unionArr = unionOfSortedArrays(nums1, nums2);
    for(int i = 0; i<unionArr.size(); i++){
        cout<<unionArr[i];
    }
    return 0;
}