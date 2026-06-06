// STL METHOD
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main ()
// {
//     vector<int>arr={1,5,6,8,9};
//     vector<int>arr1=arr;
//     reverse(arr1.begin(),arr1.end());
//     for(int i=0;i<arr1.size();i++){
//         cout<<arr1[i];
//     }
//    return 0;
// }


// Method 2

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,8,5,6,9,47};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int arr1[size];
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<size;i++){
//         arr1[i]=arr[size-1-i];
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr1[i]<<" ";
//     }
// }


// reversing array without using extra array 
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,5,8,9,6,3};
    int n =sizeof(arr)/sizeof(arr[0]);
    int i=0; 
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<"the reverse pf the array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }   
}