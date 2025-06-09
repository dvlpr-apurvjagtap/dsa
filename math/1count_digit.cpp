#include <iostream>
#include <cmath> // For log10 function
using namespace std;

int main()
{

    int n = 123;
    int count = 0;
    // Alternative method to count digits
    // Uncomment the following lines to use the loop method

    // while (n > 0)
    // {
    //     n = n / 10;
    //     count++;
    // }

    count = (int)(log10(n) + 1); // Using logarithm to count digits
    cout << count << endl;
    return 0;
}