#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a % 4 == 0){
        cout<<"Bu kabisa yili";
    }
    else if(a % 400 == 0){
        cout<<"Bu kabisa yili";
    }
    else{
        cout<<"Bu kabisa yili emas";
    }
    
    return 0;
}