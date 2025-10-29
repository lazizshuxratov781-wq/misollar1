#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i = 0; i < a; i++){
            cout<<endl;
        for(int j = 0; j < a - i - 1; j++){
            cout<<" ";
        }
            for(int k = 0; k < a; k++){
                    if(i == 0 || i == a - 1 || k == 0 || k == a - 1){
                        cout<<"*";
                }
                else{
                    cout<<" ";
                }
        }
    }
    return 0;
}