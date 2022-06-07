/*
Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).

Constraints:
-100.0 < x < 100.0
-231 <= n <= 231-1
-104 <= xn <= 104
*/

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    double result;

public:
    int count, memoc;
    double myPow(double x, int n, vector<float> memo)
    {
        // base case

        if (n == 1)
        {
            return x;
        }
        if (n == -1)
        {
            return (1 / x);
        }
        // recursive case
        if (n < 0)
        {
            if (memo[abs(n)] != -1)
            {
                // return memo[abs(n)];
                memoc++;
            }
            memo[abs(n)] = (1 / x) * myPow(x, n + 1, memo);
        }
        if (n > 0)
        {
            if (memo[n] != -1)
            {
                return memo[n];
                memoc++;
                // cout << "memoc:" << memoc++;
            }
            memo[n] = x * myPow(x, (n - 1), memo);
        }
        count++;
        //  cout << "count: " << count++;
        return memo[abs(n)];
    }

    // double fastPower(int)
    // {
    // }
};

int main()
{

    double base;
    int power;
    vector<float> arr;

    cout << "enter base" << endl;
    cin >> base;
    cout << endl;
    cout << "enter power" << endl;
    cin >> power;
    cout << endl;
    arr.resize(abs(power) + 1, -1);
    Solution s;
    cout << s.myPow(base, power, arr) << endl;
    cout << "count: " << s.count << endl;
    cout << "memoc: " << s.memoc << endl;
    return 0;
};