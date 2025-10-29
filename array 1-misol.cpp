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
    int n = arr[0];
    for(int i = 1; i < a; i++){
        if(n < arr[i]){
            n = arr[i];
        }
    }
    cout<<n;

    return 0;
}