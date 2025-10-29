#include <iostream>
using namespace std;
int main()
{
    
    int a;
    cin>>a;
    for(int i = 0; i < a; i++){
        cout<<endl;
        for(int k = 0; k < i; k++){
            cout<<" ";
        }
        for(int j = 0; j < 2 * (a - i) - 1; j++){
                cout<<"*";
        }
    }
        
    return 0;
}