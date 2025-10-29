#include <iostream>
using namespace std;
int main()
{
    
    int a;
    cin>>a;
    for(int i = a / 2; i <= a; i = i + 2){
        cout<<endl;
        for(int k = 1; k < a - i; k = k + 2){
            cout<<" ";
        }
        for(int j = 0; j < i; j++){
                cout<<"*";
        }
        for(int k = 0; k < a - i; k = k + 1){
            cout<<" ";
        }
        for(int j = 0; j < i; j++){
                cout<<"*";
        }
    }
    for(int i = a * 2 - 1; i >= 1; i = i - 2){
        cout<<endl;
        for(int k = 1; k < a * 2 - i; k = k + 2){
            cout<<" ";
        }
        for(int j = 0; j < i; j++){
                cout<<"*";
        }
    }
        
    return 0;
}