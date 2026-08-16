#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> matrix = 
    {   {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
    // 1,2,3,4,5,
    int m = matrix.size();
    int n = matrix[0].size();

    int top =0;
    int bottom = m-1;
    int right = n-1;
    int left =0;

    while (top<=bottom&&left<=right)
    {
        for(int i = left;i<=right;i++){
            cout<<matrix[top][i];
        }   
                    // cout<<endl;

        top++;
        for(int i = top;i<=bottom;i++){
            cout<<matrix[i][right];
        }   
                    // cout<<endl;

        right--;
        for(int i = right;i>=left;i--){
            cout<<matrix[bottom][i];
        }   
                    // cout<<endl;

        bottom--;
        for(int i = bottom;i>=top;i--){
            cout<<matrix[i][left];
        }   
                    // cout<<endl;

        left++;
    }
    

    return 0;
}