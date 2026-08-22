#include <bits/stdc++.h>
using namespace std;
bool checkSub(string a, string b){

    // if (a.find(b) != string::npos) return true;
    if (a.find(b) != size_t(-1)) return true;
    return false;
    
}
int main(){
    // string a="apurv";
    // string b="urv";
    // cout<<checkSub(a,b);

    stack<int> st;
    st.push(1);
    st.push(2);
    cout<<st.top();
    return 0;
}