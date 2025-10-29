#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int s = 0;
    for(int i = 0; i <= a; i++){
        cout<<endl;
        for(int j = 0; j <= a; j++){
            cout<<s<<" ";
            s++;
        }
    }

    return 0;
}