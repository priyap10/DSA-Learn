//RECURSION - STRIVER
//when a condition calls itself repeatedly until a specified condition is met.
//however if a base case condition is not specified - the condition keeps on running forever, this leads to "STACK OVERFLOW"
//BASE CONDITION - The base condition is the main necessity of the method, once met- the program terminates. 
//The fuction calling another function awaits in the stack space 
//print 0 to 4 using recursion
#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void recursionEx(){
    if(cnt == 5) return;
    cout<<cnt<<endl;
    cnt++;
    recursionEx();
}
int main(){
    recursionEx();
    return 0;
}