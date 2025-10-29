#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    int a;
    cin>>a;
    int arr2[a];
    for(int i = 0; i < a; i++){
        cin>>arr2[i];
    }
    for(int i = 0; i < n; i++){
        for(int  j = i + 1; j < n; j++){
            if(arr2[i] > arr2[j]){
                int t = arr2[j];
                arr2[j] = arr2[i];
                arr2[i] = t;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(arr1[i] == arr2[i]){
            cout<<"true";
        }
        else{
            cout<<"false";
        }
    }
    return 0;
}