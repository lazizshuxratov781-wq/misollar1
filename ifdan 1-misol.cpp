#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a < 10){
        cout<<a * 2;
    }
    if(a > 10){
        cout<<a + 3;
    }
    else{
        cout<<22;
    }

    return 0;
}