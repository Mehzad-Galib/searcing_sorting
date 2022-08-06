#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int x, int lb, int ub)
{
    if (lb <= ub)
    {

        int mid = (lb + ub) / 2;
        // x == mid
        if (x == array[mid])
        {
            return mid; // center
        }

        // x> arr mid
        else if (x > array[mid])
        {
            binarySearch(array, x, mid + 1, ub); // right side
        }
        // x < arr mid
        // 1 2 9 11 17 24 26 31 32 45

        else if (x < array[mid])
        {
            binarySearch(array, x, lb, mid - 1); // left side
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int size;
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int checkvalue;
    cout << "Enter the value to search: " << endl;

    cin >> checkvalue;

    int idx;
    idx = binarySearch(array, checkvalue, 0, size - 1);

    if (idx == -1)
    {
        cout << "the value was not found" << endl;
    }

    else
    {
        cout << "found in " << idx + 1 << "position" << endl;
    }
}