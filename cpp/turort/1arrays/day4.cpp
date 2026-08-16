#include <bits/stdc++.h>
using namespace std;


//  trancepose of matrix 
void transposeMatrix(){
    vector<vector<int>> mat ={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> trans(mat[0].size(), vector<int>(mat.size()));

    //   int n = matrix.size();
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<i;j++){
    //             swap(matrix[i][j],matrix[j][i]);
    //         }
    //     }

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            trans[i][j] = mat[j][i];
        }
        
    }

    for (int i = 0; i < trans.size(); i++)
    {
        for (int j = 0; j < trans[i].size(); j++)
        {
            cout<<trans[i][j];
        }
        cout<<endl;
    }
}

void sumColumn(){
    vector<vector<int>> mat ={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < mat.size(); i++)
    {
        int sum =0;
        for (int j = 0; j < mat[0].size(); j++)
        {
            sum += mat[j][i];
        }
        cout<<sum<<" ";
    }
}


/*

linear search 

// unsorted array 
i need to travel all the array and check whether the element is present or not then return the index 

// sorted array 
i need to travel through array and find the elem 

but we will find first occurance and its index how to find second accurance 
1) reverse for loop 
2) keep variable ans till lopp end so ans index will be modified as it saw new elem accurance.

// unsorted array 

search: o(n) complexity is depend upon what we are searching 
insert: o(n) 
replace: o(1)
delete: o(n)

// sorted array 
 search :o(lon n) binary search is only applicable on sorted array



*/

void binarySearch(){
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    int key = 5;
    int start =0;
    int end = arr.size()-1;
    while (start<= end)
    {
        int mid = start - (start- end)/2;
        if (arr[mid]==key)
        {
            cout<<mid;
            break;
        }else if(arr[mid] < key)
        {
            start = mid+1;
        }else 
        {
            end =mid-1;
        }
    }
    
}

// leaders In array

void leadersInArray(){
    vector<int> arr={16,17,4,3,5,2};
    vector<int> result;
    int n = 6;
    // bruteforce
    // for (int i = 0; i < n; i++)
    // {
    //     bool greter = false;
    //     for (int j = i; j < n; j++)
    //     {
    //         if(arr[i]< arr[j]){
    //             greter = true;
    //             break;
    //         }
    //     }
    //     if(greter==false){
    //         result.push_back(arr[i]);
    //     }
    // }

    // optimal
    int maxi= arr.back();
    result.push_back(maxi);
    for (int i = arr.size()-2; i >=0 ; i--)
    {
        if(arr[i]>maxi){
            maxi= arr[i];
            result.push_back(arr[i]);
        }
    }
    reverse(result.begin(),result.end()); 

    for(auto it : result){
        cout<<it<<" ";
    }
}

int main(){
    // transposeMatrix();
    // sumColumn();
    binarySearch();
    // leadersInArray();

    return 0;
}