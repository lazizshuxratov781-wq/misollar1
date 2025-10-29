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
    int arr2[n + 1] = {};
    int b,a;
    cin>>b>>a;
    int c = 0;
    for(int i = 0; i < n + 1; i++){
        if(b == i){
            arr2[b] = a;
            c++;
        }
        else{
            arr2[c] = arr1[i];
        }
        c++;
    }
    cout<<c;
    return 0;
    
}
