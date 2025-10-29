.#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n] = {};
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; i < n; i++){
            if(arr1[i] == arr1[j]){
                arr1[j] = arr1[n - 1];
                n--;
            }
        }
    }
    int arr2[n] = {};
    for(int i = 0; i < n; i++){
        arr1[i] = arr2[i];
    }
    for(int i = 0; i < n - 1; i++){
        cout<<arr2[i];
    }
    return 0;
}

