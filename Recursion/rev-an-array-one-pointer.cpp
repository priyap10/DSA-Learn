//Reverse an Array - One Pointer
#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr, int i){

    int n = arr.size();

    if(i >= n/2){
        return;
    }

    swap(arr[i], arr[n-i-1]);

    reverseArray(arr, i+1);
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    reverseArray(arr, 0);

    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}