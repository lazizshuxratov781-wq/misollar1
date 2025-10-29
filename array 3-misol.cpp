#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i = 0; i < a; i++){
        cin>>arr[i];
    }
    int s = 0;
    int t = 0;
    for(int i = 0; i < a; i++){
        s = s + arr[i];
    }
    t = s / a;
    cout<<t;
    return 0;
}