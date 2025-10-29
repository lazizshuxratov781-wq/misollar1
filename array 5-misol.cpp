#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr1[a]={};
    for(int i = 0; i < a; i++){
        cin>>arr1[i];
    }
    int n;
    cin>>n;
    if(n >= 0 && n < a){
        cout<<arr1[n];
    }
    cout<<n;
    return 0;
}