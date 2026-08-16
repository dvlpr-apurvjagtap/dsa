#include <bits/stdc++.h>
using namespace std;

int main(){
    string a = "apurv";
    cout<<a.find('u');


    vector<char> c={'a','j'};
    string s(c.begin(),c.end());
    cout<<s;
    
    cout<<s.compare("aj");

    // variables are compare based on values 
    // objects are compare based on memory location 
    // in cpp == operator compare content not memory location 

    string x = "apurv";
    string y = "apurv";
    cout<<(x==y);

    string s1 = "Hello";
    string s2("Hello");
    string s3{"Hello"};
    cout<<(s2==s3);
    cout<<(s2.compare(s3));


    // immutable - not changable and mutable -changable 
    // string is mutable.

    string r= "hello";
    cout<<&r;
    r[0]='i';
    cout<<&r; //address stayes same values are changed
    cout<<r; //garbage collection 

    // replace
    // indexof
    // string only change when you assign 
    cout<<r.at(1);
    cout<<r.find('l');

    string g ="apurvjagtap";
    cout<<count(g.begin(),g.end(),'a');
    return 0;

}