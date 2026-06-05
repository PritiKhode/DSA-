#include <iostream>
using namespace std;

int main()
{
    int arr[5], max, min;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value of arr[" << i << "] : ";
        cin >> arr[i];

        if (i == 0)
        {
            min = max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "min = " << min << " and max = " << max << endl;

    return 0;
}