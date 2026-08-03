#include <bits/stdc++.h>
using namespace std;

// fizz buzz O(n) + to_string(i);
// ternary
// switch case   
// 4 for loop last modification



void fizzBuzz(int n){
   for(int i =1;i<=n;i++){
    switch ((i % 3 == 0) + 2 * (i % 5 == 0))
    {
    case 3:
        cout<<"fizzbuzz";
        break;
    case 1:
        cout<<"fizz";
        break;
    case 2:
        cout<<"buzz";
        break;
    default:
        cout<<i;
        break;
    }
   } 
}


// matrix 
void travalsalMatrix(){
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // cout<<arr[0].size();
}


// sum of matrix
void sumMatrix(){
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    long sum=0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            sum += arr[i][j];
        }
    } 
    cout<<sum;
}

// digonal differance ?? [walmart]
void digonalDiff(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{9,8,9}};
    int left=0;
    int right=0;

    int start =0;
    int end = arr[0].size()-1;
    
    // using while loop
    // int n = 0;
    // while(n< arr.size()){
    //     left += arr[n][start++];
    //     right += arr[n][end--];
    //     n++;
    // }

    // using for
    for (int i = 0; i < arr.size(); i++)
    {
        // left += arr[i][start++];
        // right += arr[i][end--];
  
        left += arr[i][i];
        right += arr[i][arr.size()-1-i];
    }
    
    cout<<left<<" "<<right<<endl;
    cout<<"diff:"<<abs(left-right);
}

int main(){
    // fizzBuzz(15);
    // travalsalMatrix();
    // sumMatrix();

    digonalDiff();
    return 0;
}