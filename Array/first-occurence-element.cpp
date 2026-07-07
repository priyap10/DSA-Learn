//return the first occurence of an element in an array
#include<bits/stdc++.h>
using namespace std;
int firstOccurence(vector<int> &nums, int n, int number){
    for(int i = 0; i<n; i++){
        if(nums[i]==number){
            return i;
        }
    }
    return -1;
}
int main(){
    int n; 
    cin>>n;
     int number;
    cin>>number;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    cout<<firstOccurence(nums, n, number);
    return 0;
}