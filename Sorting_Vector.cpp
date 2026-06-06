#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr(5);
    cout<<"Enter the element of array = ";
    for(int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<" "<<endl;

    //sort(arr.begin(),arr.end());     //  it arrange the array in ascending order 
    reverse(arr.begin(),arr.end());    // it reverse thw hole array
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}