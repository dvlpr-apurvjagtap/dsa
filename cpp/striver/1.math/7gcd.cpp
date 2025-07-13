#include <iostream>

using namespace std;

int main()
{

    int a = 40;
    int b = 20;

    // int gcd = 0;
    // for (int i = min(a, b); i >= 1; i--)
    // {
    //     if (a % i == 0 && b % i == 0)
    //     {
    //         gcd = max(gcd, i);
    //         break;
    //     }
    // }

    while (a > 0 && b > 0) // Using Euclidean algorithm
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        cout << b;
    else
        cout << a;
    return 0;
}