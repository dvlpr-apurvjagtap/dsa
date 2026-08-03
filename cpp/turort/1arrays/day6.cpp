#include <bits/stdc++.h>
using namespace std;


// subarray - subsequence -subset 
/*
subarray -
values must be continous 
value must come in order 
[5,2,1,4,3,6],
[5,2,1],
[2,1,4,3],
[5][2],

total nulber of subarray
formula = n*(n+1)/2;

subsequence - 
[5,2,1,4,3,6],

not be squential 
but should be in order 
[5,1,3,6],


subset
[5,2,1,4,3,6]
any possible combination from array 
not be squential 
not be in order 
[6,2,4]



4,2.-3,1,6
4,6,3,4,10
10,6,4,7,6
6,0,-1,-3,4


never use sorting while order is important 
*/

void printSubarray(){ 
    vector<int> arr={5,2,4,1,3,6};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
        }
        cout<<endl;
    } 
}

/*
so basically theory is if we have subbarray with sum zero the number will apper twice but
for subarray start from zero index need to find with prefix 0 
so we have two approches combine in one.
 ex:   if (prefix == 0 || seen.count(prefix)) 
*/ 

void subarraySumZero(){
   vector<int> arr = {4, 2, -3, 1, 6};
   unordered_set<int> seen;
   int prefix = 0;
   for (int x : arr) {
    prefix += x;
    if (prefix == 0 || seen.count(prefix)) {
        cout << "Zero sum subarray exists";
        return;
    }
    seen.insert(prefix);
    }
    cout << "No zero sum subarray";
}

/*
majority elemets 
1. brute force - two loop counting freq of elem if greater than (n/2) return elem.
2. map - store elem and freq in map which has high return.
3. sorting - after sorting at index n/2 always mejority elem.
4. partial sorting
5. Bayer moore algo - only works when majority elem >= n/2

*/ 
void majorityElem(){
    vector<int>arr={1,1,1,1,2,3,4,5};
    int count =0;
    int elem =arr[0];
    // bayer moore algo.
    for(auto it: arr){
        if(count == 0){
            count++;
            elem=it;
        }
        else if(elem==it){
            count++;
        }else{
            count--;
        }
    }
    cout<<elem;
}

int main(){
    // printSubarray();
    // subarraySumZero();
    majorityElem();
    return 0;
}