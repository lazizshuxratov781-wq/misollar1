#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a % 2 == 1 &&  b % 2 == 1 && c % 2 == 1){
        cout<<1;
    }
    else if(a % 2 == 0 &&  b % 2 == 0 && c % 2 == 0){
        cout<<2;
    }
    else if((a % 2 == 1) || (b % 2 == 1) || (c % 2 == 1)){
        cout<<3;
    }
    else{
        cout<<0;
    }
    

    return 0;
}