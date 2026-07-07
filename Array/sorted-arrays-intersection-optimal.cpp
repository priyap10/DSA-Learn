//intersection of two sorted arrays 
//optimal approach using two pointers
//TC: O(n1 + n2)
//SC: O(1)
#include<bits/stdc++.h>
using namespace std;
vector<int> IntersectionOfSortedArrays(vector<int> &A, vector<int> &B, int n, int m){
    int i = 0; 
    int j = 0;
    vector<int> ans;
    while(i<n && j<m){
        if(A[i]<B[j]){
            i++;
        } else if(A[i]>B[j]){
            j++;
        } else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i = 0; i<n; i++){
        cin>>A[i];
    }
    int m ;
    cin>>m;
    vector<int> B(m);
    for(int i = 0; i<m; i++){
        cin>>B[i];
    }
    vector<int> ans = IntersectionOfSortedArrays(A, B, n, m);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i];
    }
    return 0;
}