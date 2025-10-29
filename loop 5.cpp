#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i = 0; i <= a; i++){
        cout<<endl;
        for(int j = 0; j <= a; j++){
            if(i == 0 || i == 9 || j % 2 == 0){
                cout<<"("<<i<<","<<j<<")";
            }
            else{
            cout<<"     ";
            }
        }
    }

    return 0;
}