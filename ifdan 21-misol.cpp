#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a < b && b > c && a == c){
        cout<<b;
    }
    else {
        cout<<0;
    }

    return 0;
}