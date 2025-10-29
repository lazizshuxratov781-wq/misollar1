#include <iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a >= 'a' && a <= 'a'){
        cout<<"lowerCase";
    }
    else if(a >= 'A' && a <= 'Z'){
        cout<<"upperCase";
    }
    else{
        cout<<"none";
    }

    return 0;
}