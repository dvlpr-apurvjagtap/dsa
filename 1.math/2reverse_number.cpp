#include <iostream>

using namespace std;

int main()
{

    int n = 123;
    int reverse = 0;
    while (n > 0)
    {
        reverse = (reverse * 10) + (n % 10); // Extract the last digit and add it to the reverse
        n = n / 10;                          // Remove the last digit from n
    }
    cout << reverse << endl;
    return 0;
}