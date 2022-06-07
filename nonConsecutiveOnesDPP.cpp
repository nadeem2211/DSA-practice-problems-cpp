#include <iostream>
#include <vector>
using namespace std;

int numOfWays(int n, int i, vector<int>::iterator vec,int input){
    int ways = 0;
    //vector<int> vec[n];
    //base case
    if(n==0){
        return 1;
    }
    if(n<0 || i > n){
        return 0;
    }

    //recursive case
    if (*(vec-1) == 1){
        *vec=0;
        ways += numOfWays(n - 1, i + 1,vec+1,0);
        //return ways;
    }
    else  {
        //vec->push_back(input);
        *vec = input;
        ways += numOfWays(n - 1, i + 1,vec+1,0); 
        ways += numOfWays(n, i, vec, 1);
        // ways += numOfWays(n - 1, i + 1, 1);
        }
        return ways;
}

int main(){
    int n,result;
    cout << "enter value of n : " << endl;
    cin >> n;
    vector<int> arr(n);
    //vector<int>::iterator itr;
    //itr = arr.begin();
    result = numOfWays(n - 1, 0, arr.begin(), 1);
    cout << result << endl;
    return 0;
}
