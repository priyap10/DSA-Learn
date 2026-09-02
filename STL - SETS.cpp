//STL - CPP - SETS
#include<bits/stdc++.h>
using namespace std;
void explainSET(){
    //SET
    //ELEMENTS ARE UNIQUE & SORTED
    set<int> st;

    st.insert(1);
    st.insert(2);
    st.insert(4);
    st.insert(5);

    auto it = st.find(3);

    if(it != st.end()){
        cout << *it;
    } 
    else{
        cout << "Element not found"<<endl;
    }

    st.insert(10);

    auto it2 = st.find(4);
    if(it2 != st.end()){
        st.erase(it2);
    }
    int cnt  = st.count(10);
    cout<<cnt<<endl;

    for(auto x : st){
        cout << x << " ";
    }
    //MultiSets are same
    //multiset<int> set - synatx
    //it follows sorted but doesnt follow unique factor unlike the normal set explained above 
    //unordered_set<int> set - stored unique but in a random order  - BIG O (1)

}
int main(){
    explainSET();
    return  0;
}