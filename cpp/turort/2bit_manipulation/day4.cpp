#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums ={1,0,1,1,0};
    int ans=0;int count =0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count+=1;
            ans=max(ans,count);
        }else{
            count =0;
        }
    }
    cout<<ans;
    return 0;
}