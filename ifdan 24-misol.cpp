#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a >= 100){
        cout<<3;
    }
    else if(a >= 10){
        cout<<2;
    }
    else{
        cout<<1;
    }

    return 0;
}