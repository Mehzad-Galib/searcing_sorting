#include <bits/stdc++.h>
using namespace std;

void printArr(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
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

    cout << "before sort:" << endl;

    printArr(array, size);

    // step 1: find max

    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    cout << "max is: " << max << endl;

    // step 2

    int count[max + 1];

    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }

    // step 3 frequency calculation

    for (int i = 0; i < size; i++)
    {
        count[array[i]]++;
    }

    cout << "counting array: " << endl;

    printArr(count, max + 1);

    // step 4 cumulative sum/prefix sum

    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    cout << "prefix sum of counting array: " << endl;

    printArr(count, max + 1);

    // step 5 final array => backward traversal of basic array

    int final[size];

    for (int i = size - 1; i >= 0; i--)
    {
        count[array[i]]--;
        int k = count[array[i]];

        final[k] = array[i];
    }

    cout << "after sort: " << endl;

    printArr(final, size);
}