
#include <bits/stdc++.h>
using namespace std;
// prefix

void prefix(){
    vector<int> arr={10,20,30,40};
    vector<int>pf(arr.size(),0);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            pf[i]+=arr[j];
        }   
    }

    for(auto it: pf){
        cout<<it;
    }
}


// equilebrium 

void eq(){
    vector<int> arr={6,10,3,3};
    int totalsum =0;
    int left =0;
    int right=0;
    for(auto i: arr){
        totalsum += i;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        right = totalsum - left - arr[i];
        
        if(left==right){
            cout<<i;
        }
        left+=arr[i];
    }
    

}
int main(){
    //  prefix();
    eq();
    return 0;
}