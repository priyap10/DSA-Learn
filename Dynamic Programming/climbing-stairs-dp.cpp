//70. Climbing Stairs
//Dynamic Programming
//Space Optimized Solution

#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n) {
    if(n<=1){
        return 1;
    }
   int prev = 1;
    int prev2 = 1;
    for(int i = 2; i<=n; i++){
        int curri = prev2 + prev;
        prev2 = prev;
        prev = curri;
    }
    return prev;
}
int main(){
    int n;
    cin>>n;
    
    cout<<climbStairs(n);
    return 0;
}