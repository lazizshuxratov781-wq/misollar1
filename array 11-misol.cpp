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
    int n;
    cin>>n;
    int s = 0;
    for(int i = 0; i < a; i++){
        if(arr1[i] == n){
                s = s + 1;
        }
    }
    cout<<s;

    return 0;
}