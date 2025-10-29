#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a] = {};
    for(int i = 0; i < a; i++){
        cin>>arr[i];
    }
    int b;
    cin>>b;
    int arr2[a+1] = {};
    arr2[0] = b;
    for(int i = 0; i < a + 1; i++){
        arr2[i + 1] = arr[i];
    }
    for(int i = 0; i < a + 1; i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
    
}
