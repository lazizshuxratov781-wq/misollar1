#include <iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')){
        cout<<"alpha";
    }
    else if(a >= '0' && a <= '9'){
        cout<<"son";
    }

    return 0;
}