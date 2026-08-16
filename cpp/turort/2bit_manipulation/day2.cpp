#include <bits/stdc++.h>
using namespace std;


/*
Bit manipulation 

1] and, or, not

and 
0 0 = 0
0 1 = 0
1 0 = 0
1 1 = 1


or 
0 0 = 0
0 1 = 1
1 0 = 1
1 1 = 1


not 
!0 = 1
!1 = 0


2] left shift and right shift operator 
<< left shift (shift binary values by one to left)
>> rigght shift (shift binary values by one to right)

a =10;
a<<1;
a *(2^1);

a =10;
a>>1;
a / (2^1);

3] xor operator
0 0 = 0
0 1 = 1
1 0 = 1
1 1 = 0

a ^ a = 0

commutative 

a^b = b^a

a+b= b+a
a*b = b*a

a-b != b-a
a/b != b/a

a^0 = a
0 is a identity of xor

a+0 = a additive identity 
a*1=a product identity


a^a^a^a^a
odd = number itself 
even = zero


a^a^b = a^b^a = b^a^a = b
possition does not matter 

a= b*c
b= a/c div is inverse of multiplication 

a= b+c
b= a-c sub is inverse of addition 

inverse of xor is xor 
 a=b^c
 b=a^c 
 


*/ 

void leftShift(){
    int a =10;
    int k =4;
    a= a<<k;
    cout<<a;
}

void rightShift(){
    int a =10;
    int k =4;
    a= a>>k;
    // a= a>>2;
    // a= a<<2;
    cout<<a;
}

void xora(){
    int a=10;
    int k =8;
    a = 0^1^2^3^4^5^6^8;
    cout<<a;
}

void encode(){
    // int a =10;
    // int b=3;
    // int c = a^b;
    // int ans = c^b;
    // cout<<ans;

    vector<int> arr={1,0,2,1};
    vector<int> encode;
    for(int i=1;i<arr.size();i++){
        encode.push_back(arr[i]^arr[i-1]);
    }
    vector<int> decode;
    decode.push_back(encode[0]);
    for (int i = 0; i < encode.size(); i++)
    {
        decode.push_back(encode[i]^decode[i]);
    }    
    for(auto it: decode){
        cout<<it<<endl;
    }
}


int main(){
    // leftShift();
    // rightShift();
    // xora();
    encode();
    return 0;
}