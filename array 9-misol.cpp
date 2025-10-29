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
    int arr2[n-1] = {};
    int b;
    cin>>b;
    int s = 0;
    for(int i = 0; i < n; i++){
        if(b == i){
            i++;
            arr2[s] = arr1[i];
        }
        else{
            arr2[s] = arr1[i];
        }
        s++;
    }
    for(int i = 0; i < n-1; i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}