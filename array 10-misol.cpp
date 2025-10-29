#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n] = {};
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    int arr2[n] = {};
    for(int i = 0; i < n; i++){
        arr2[n - 1 - i] = arr1[i];
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}