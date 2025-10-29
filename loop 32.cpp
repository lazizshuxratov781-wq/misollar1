#include <iostream>
using namespace std;
int main()
{
    
    int a, b;
    cin>>a>>b;
    int e;
    int d;
    int f;
    for(int i = a; i <= b; i++){
        d = i % 10;
        e = i - d;
        f = e / 10;
        if(d == f){
            cout<<d * 10 + f<<endl;
        }
        
    }
        
    return 0;
}