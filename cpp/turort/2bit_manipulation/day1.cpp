#include <bits/stdc++.h>
using namespace std;

/*
lc patter technique
3000 q - blind 75,grind 75, top interview 150

1) input array is sorted -> binary serach , two pointer
2) all permutation/ subset -> backtracking
3) graph -> dfs,bsf
4) linked list -> two pointer (fast, slow)
5) recursion not allowed -> stack
6) in-place -> swap sc(1)
7) maximum minimum smallest -> dp
8) top k item/least/kth max/min -> heap
9) common string -> map,kmp,trie
10) best complexity for search lookup -> unordered_set unordered_map
11) sorting -> given range of number for O(n) count sort - bucket sort
12) range based query -> segment tree, fenwick tree
13) bst  -> inOrder travalsal 

*/ 


/*
recursion

function call it-self inside its defination 


factorial of a number 
N! = 1*2*3*4*5 .. * N;
5! = 5*4*3*2*1 = 120;

N! = n * (n-1)!

0! =1 
thre is only one way 0 has 0 items

recursion use stack to store and perform operations 
so TC: O(N)


all resursion code can be solved by iteration ? yes
all iteration code can be solved by recursion ? yes

eg: trees 

*/



int factorial(int n){
    if (n==1||n==0) // n<=1
    {
       return 1;
    }
    return n * factorial(n-1);
}

/*
rotate array by k position 
 k == 0 || n % k == 0 
 k = k % n

 nums[(i+k)%n]= res[i]; right 
 nums[(i-k)%n]= res[i]; left 


*/ 



void rotateArray(){
    vector<int> arr ={1,2,3,4,5,6,7};
    int k =2;
    int n = arr.size();
    k = k;
    if (k==0)
    {   
        for (int i = 0; i <= n; i++)
        {
            cout<<arr[i];
        }
    }
    else
    {
        reverse(arr.begin(),arr.end());
        reverse(arr.begin()+k,arr.end());
        reverse(arr.begin(),arr.begin()+k);
        for(auto it : arr){
            cout<<it;
        }
    }    
}


int main(){
    // int a =5;
    // int ans = factorial(a);
    // cout<<ans;
    rotateArray();
    return 0;
}