#include <iostream>

using namespace std;

int main()
{

    int n = 17;
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            count++;
            if (n / i != i)
            {
                cout << n / i << " ";
                count++;
            }
        }
    }
    if (count == 2)
        cout << "prime";
    else
        cout << "not prime";
    return 0;
}