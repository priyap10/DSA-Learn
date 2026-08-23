//STL
//STACK
#include<bits/stdc++.h>
using namespace std;
void explainStack(){
    //LIFO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(5);
    cout<<st.top();
    st.pop();
    cout<<st.top();
    cout<<st.size();
    // cout<<st.empty();
    stack<int> st1;
    st.swap(st1);
    cout<<st1.top();
    // cout<<st1;
}
void explainQueue(){
    //FIFO
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
}
void explainPriorityQueues(){
    //Nonliner
    //Tree ds is maintained
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    cout<<pq.top()<<endl;
    priority_queue<int, vector<int>,greater<int>> pq1; //ascending order queue
    pq1.push(2);
    pq1.push(10);
    pq1.push(8);
    pq1.push(5);
    cout<<pq1.top()<<endl;
    pq1.pop();
    cout<<pq1.top()<<endl;

}
int main(){
    explainStack();
    explainQueue();
    explainPriorityQueues();
    return 0;
}