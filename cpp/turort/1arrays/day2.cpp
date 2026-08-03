#include <bits/stdc++.h>
using namespace std;

void maxandminElement(int arr[], int n){
    // int max=INT_MIN;
    // int min= INT_MAX;

    int maxi= arr[0];
    int mini=arr[0];
    for(int i= 0;i<n;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
        if(mini>arr[i]){
            mini = arr[i];
        }
    }
    cout<<maxi<<mini;
}


void twoMaxValues(int arr[],int n){ //morgen stanly // goldman satch 
    if(n<2) cout<<"need two values ";
    // int maxi = arr[0];                                                                                              
    // int smaxi = arr[0];

    int maxi=INT_MIN;
    int smaxi= INT_MIN;
    int tmaxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(maxi<arr[i]){
            smaxi=maxi;
            maxi=arr[i];
        }else if(arr[i]<maxi&& arr[i]>smaxi){
            tmaxi= smaxi;
            smaxi = arr[i];
        }  else if(arr[i]<smaxi&& arr[i]>tmaxi){
            tmaxi = arr[i];
        }  
    }
    cout<<maxi<<" "<<smaxi<<" "<<tmaxi;
}

// swap array (in place)
void swapArray(int arr[],int n){
    int left = 0;
    int right = n-1;
    while (left <right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
}

void swapWithStack(int arr[], int n){
    stack<int>st;
    for (int i = 0; i < n; i++)
    {
        st.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i]=st.top();
        st.pop();
    }
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    int a[]={1,2,3,4,5}; // definition and declaration of array 
    // int a[2];//definition 
    // a[0]=1; //declaration 

    // maxandminElement(a,5);

    // twoMaxValues(a,3);

    // swapArray(a,5);

    swapWithStack(a,5);
    
    return 0;
}