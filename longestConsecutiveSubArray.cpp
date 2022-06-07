// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[] : the input array
    // N : size of the array arr[]

    // Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        // Your code here
        int max = 1, streak = 1;
        // sort
        sort(arr, arr + N);
        // loop
        for (int i = 1; i < N; i++)
        {

            if (arr[i] == arr[i - 1] + 1)
            {
                streak++;
                if (max < streak)
                {
                    max = streak;
                }
            }
            else if (arr[i] == arr[i - 1])
            {
            }
            else
            {
                streak = 1;
            }
        }
        return max;
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t, n, i, a[100001];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.findLongestConseqSubseq(a, n) << endl;
    }

    return 0;
} // } Driver Code Ends