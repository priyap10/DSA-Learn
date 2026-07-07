//Intersection of two sorted arrays
//bruteforce approach
//TC : O(n1 x n2)
//SC : O(n2)
#include<bits/stdc++.h>
using namespace std;
vector<int> intersectionOfTwoSortedArrays(vector<int> &A, vector<int> &B, int n, int m){
    vector<int> ans;
    int vis[m]={0};
    for(int i = 0; i<n ;i++){
        for(int j = 0; j<m ; j++){
            if(A[i]==B[j]&& vis[j]==0){
                ans.push_back(A[i]);
                vis[j]=1;
                break;
            }
            if(B[j]>A[i]) break;
            
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
    int m;
    cin>>m;
    vector<int> B(m);
    for(int i = 0; i<m; i++){
        cin>>B[i];
    }
    vector<int> ans = intersectionOfTwoSortedArrays(A, B, n, m);
    for(int i = 0; i<ans. size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
    