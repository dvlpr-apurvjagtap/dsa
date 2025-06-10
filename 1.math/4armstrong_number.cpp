#include <iostream>

using namespace std;

int main()
{

    int n = 371;
    int duplicate = n; // Store the original number for comparison later
    int arm = 0;
    while (n > 0)
    {
        int digit = n % 10;           // Extract the last digit
        arm += digit * digit * digit; // Calculate the cube of the digit and add it to arm
        n = n / 10;                   // Remove the last digit from n
    }
    if (duplicate == arm) // Compare the original number with the calculated armstrong number
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not an Armstrong number" << endl;
    }
    return 0;
}