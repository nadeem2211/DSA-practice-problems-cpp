#include <iostream>
using namespace std;
/*
Example 1:
Input: N = 3
Output: Prime
Explanation: 3 is a prime number

Example 2:
Input: N = 26
Output: Non-Prime
Explanation: 26 is not prime
*/
bool isPrime(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int num;
    cout << "enter number: " << endl;
    cin >> num;
    bool ans = isPrime(num);
    if (num != 1 && ans == true)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Non Prime Number";
    }
    return 0;
}