
#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    int count =0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {3,4,6,7,2,3,2,4,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int result = linearSearch(arr, size,target); 

    if(result !=-1)
    {
        cout << "Element found with number of count: " << result<< endl;
    }
    else
    {
        cout << "Element is not found" << endl;
    }

    return 0;
}