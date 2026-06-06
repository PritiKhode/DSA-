#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& arr, int i, int j)
{
    while(i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

void rotate(vector<int>& arr, int k)
{
    int n = arr.size();

    k = k % n;

    reverseArray(arr, 0, n-k-1);
    reverseArray(arr, n-k, n-1);
    reverseArray(arr, 0, n-1);
}

int main()
{
    vector<int> arr = {1,2,3,5,4,6,5};

    int k = 3;
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    rotate(arr, k);

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
