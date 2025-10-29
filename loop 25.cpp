#include <iostream>
using namespace std;
int main()
{
    
    int a;
    cin>>a;
    for(int i = 0; i < a; i++){
        cout<<endl;
        for(int k = 0; k < a - i - 1; k++){
            cout<<" ";
        }
        for(int j = 0; j < 2 * i + 1; j++){
            if(j == 0 || j == 2 * i || i == a - 1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
        }
    }
        
    return 0;
}