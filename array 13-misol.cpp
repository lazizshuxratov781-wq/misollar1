#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr1[a] = {};
    for(int i = 0; i < a; i++){
        cin>>arr1[i];
    }
    
    int b;
    cin>>b;
    int arr2[b] = {};
    for(int i = 0; i < b; i++){
        cin>>arr2[i];
    }
    
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" "<<arr2[j]<<" ";
            }
        }
    }
    return 0;
}