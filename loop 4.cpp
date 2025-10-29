#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i = 0; i <= a; i++){
        cout<<endl;
        for(int j = 0; j <= a; j++){
            if(i == 0 || i == a || j == 0){
                cout<<"("<<i<<","<<j<<")";
            }
        }
    }
    
    
    return 0;
}