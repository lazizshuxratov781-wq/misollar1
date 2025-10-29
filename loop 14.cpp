#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i = 0; i < a; i++){
        cout<<endl;
        for(int j = 0; j < i; j++){
                cout<<" ";
        }
        for(int k = 0; k < a; k++){
        cout<<"*";
        }
    }
    
    return 0;
}