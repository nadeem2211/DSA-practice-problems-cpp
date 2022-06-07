#include <iostream>
using namespace std;
#define MAX 255
class countingSort
{
private:
    /* data */
public:
    void cSort(int arr[], int size)
    {
        int count[MAX] = {0};
        int output[size];
        int max = 0;
        // finding max element in array
        for (int i = 0; i < size; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }

        cout << "max " << max << endl;

        // filling count arraywith count of elemet in arr
        for (int i = 0; i <= max; i++)
        {
            count[arr[i]] += 1;
        }
        // modify count aray with prev+1 value in ith place
        for (int i = 1; i <= max; i++)
        {
            count[i] = count[i] + count[i - 1];
        }
        // filling output array with sorted data
        for (int i = size - 1; i >= 0; i--)
        {
            output[count[arr[i]] - 1] = arr[i];
            // decrease count in count array for that value
            count[arr[i]]--;
        }
        // copy output to input array
        for (int i = 0; i < size; i++)
            arr[i] = output[i];
        // return array
        //   return arr;
    }

    // ~countingSort() {}
};

int main()
{
    int ar[] = {2, 3, 7, 1, 8, 1, 9, 2, 4, 5, 4, 6, 2, 8, 9};
    int n = sizeof(ar) / sizeof(ar[0]);
    countingSort cs;
    cs.cSort(ar, n);
    // display sorted array
    for (int i = 0; i < n; i++)
        cout << "arr[" << i << "] = " << ar[i] << endl;
    return 0;
}
