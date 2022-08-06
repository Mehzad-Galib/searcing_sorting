#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int value;

    cin >> value;

    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            flag = 1;
            cout << i << "th index, " << i + 1
                 << " position" << endl;
        }
    }

    if (flag == 0)
    {
        cout << "not found" << endl;
    }
}