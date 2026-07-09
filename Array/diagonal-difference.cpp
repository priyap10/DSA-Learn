//Hackerrank
//Diagonal Difference Problem
//Logic
//Arrays
int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int left= 0;
    int right = 0;
    for(int i = 0; i<n; i++){
        left += arr[i][i];
        right += arr[i][n-1-i];
    }
    return abs(left - right);
}