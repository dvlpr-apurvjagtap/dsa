#include <bits/stdc++.h>
using namespace std;



/*
wiggle sort [google microsoft amazon]
wiggle means up -down (min max min max min)

number at odd index are peak 
1. bruteforce sorting o(n log n).
2. optimal- swap element on even and odd even is small and odd is peak.
*/ 

void wiggleSort(){
    vector<int> arr={1,2,3,4,5,6}; //[1,3,2,4,6,5]
    for (int i = 0; i < arr.size()-1; i++){
        if ((i % 2 == 0 && arr[i] > arr[i + 1]) ||
            (i % 2 == 1 && arr[i] < arr[i + 1])) {
                swap(arr[i], arr[i + 1]);
        }
    }
    for(auto i:arr){
        cout<<i;
    }
}

/*
majority elem.  //bayer moore algo.
*/ 

/* 
kid with greatest number of candy
*/ 

/*
decompress rle run length element 
aabbbc -> a2b3c1 endoded 
a2b3c1 -> aabbbc decoded

tc: o( n/2 * max(freq) );
sc: o(n);
*/ 



/*
maximum subarray [google, microsoft, linkedin ] //kadanes algo
*/ 

void maxSum(){
    vector<int> arr={1,2,-4,4,5};
    int currentSum=0;
    int maxi= INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        currentSum += arr[i];
        if(currentSum> maxi){
            maxi = currentSum;
        }
        if(currentSum< 0){
            currentSum=0;
        }
    }
    cout<<maxi;
    
}
int main(){
    // wiggleSort();
    maxSum();
    return 0;
}