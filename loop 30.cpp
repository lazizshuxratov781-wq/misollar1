#include <iostream>
using namespace std;
int main()
{
    
    int a;
    cin>>a;
    for(int i = 0; i < a; i++){
        cout<<endl;
            for(int j = i; j < a; j++){
                cout<<"*";
            }
            for(int k = 1; k < i * 2 + 1; k++){
                cout<<" ";
            }
            for(int j = i; j < a; j++){
                cout<<"*";
            }
        }
    for(int i = 0; i < a; i++){
        cout<<endl;
            for(int j = 0; j <= i; j++){
                cout<<"*";
            }
            for(int k = (2 * i); k < (2 * a - 2); k++){
                cout<<" ";
            }
            for(int j = 0; j <= i; j++){
                cout<<"*";
            }

        }
    return 0;
}