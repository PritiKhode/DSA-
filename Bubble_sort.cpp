#include<iostream>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0,i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[] = { 1,8,6,2,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

}