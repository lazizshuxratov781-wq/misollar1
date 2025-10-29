#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a > b && b > 0){
        cout<<b;
    }
    if(a > b && b < 0){
        cout<<b;
    }
    
    if(a < b && a > 0){
        cout<<a;
    }
    if(a < b && a < 0){
        cout<<a;
    }

    return 0;
}