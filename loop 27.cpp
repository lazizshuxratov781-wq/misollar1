#include <iostream>
using namespace std;
int main()
{
    
    int a;
    cin>>a;
    int s = 1;
    for(int i = 0; i < 2 * a - 1; i++){
        cout<<endl;
        for(int j = 0; j < s; j++){
            cout<<"*";
        }
                if(i < a - 1){
                    s++;
                }
                else{
                    s--;
                }
    }
        
    return 0;
}