#include <iostream>
#include <vector>
using namespace std;
void fun(int **p)
{
    static int q = 20;
    *p = &q;
    // return q;
    //  p is (int*) and *p is (integer).
}
int main()
{
    vector<int> vec(3);
    //  vec.push_back(2);
    cout << vec.size();
}