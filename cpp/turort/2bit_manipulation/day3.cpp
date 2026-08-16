#include <bits/stdc++.h>
using namespace std;



// primality test 

/*
1] 1 to n 
2] 2 to n-1
if found the factor return 2 to factor if not then 2 to n 

3] 2 to n/2 if doest exit here then not exist afterwrads
4] euclid theorem - if any nymber doe not have any factor till sqrt(n) will not have factors afterwards
  
5]seive of eratosthenes


*/ 
bool isPrime(int n){
    int cnt =0;
    for (int i = 0; i <= n; i++)
    {
        if(n%i==0) cnt++;
    }
    return (cnt==2);
}
void primeCheck(){
    cout<<isPrime(10);
}

// seive of eratosthenes
void sieve() {
    int n = 14;

    vector<bool> result(n + 7, true);

    result[0] = false;
    result[1] = false;

    for (int i = 2; i * i < n+7; i++) {
        if (result[i]) {
            for (int j = i * i; j < n+7; j += i) {
                result[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (result[i] && result[i+6] && n%i==0)
            cout << i << " ";
    }
}


// left to right  
void sieveRange(int l, int r) {
    vector<bool> result(r + 1, true);
    result[0] = false;
    if (r >= 1) result[1] = false;

    for (int i = 2; (long long)i * i <= r; i++) {
        if (result[i]) {
            for (int j = i * i; j <= r; j += i) {
                result[j] = false;
            }
        }
    }

    for (int i = max(l, 2); i <= r; i++) {
        if (result[i])
            cout << i << " ";
    }
    cout << endl;
}

int main(){
    // primeCheck();
    sieve();
    return 0;
}