#include <iostream>

using namespace std;

int main()
{

    int n = 121;
    int duplicate = n; // Store the original number for comparison later
    int reverse = 0;
    while (n > 0)
    {
        reverse = (reverse * 10) + (n % 10); // Extract the last digit and add it to the reverse
        n = n / 10;                          // Remove the last digit from n
    }
    if (duplicate == reverse) // Compare the original number with the reversed number
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}