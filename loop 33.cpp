#include <iostream>
using namespace std;
int main()
{
    
    int a, b, c;
    cin>>a>>b>>c;
    int s = 0;
    for(int i = a; i <= b; i++){
        int d = 1;
        for(int j = 1; j <= c; j++){
            d = d * i;
        }
        s = s + d;
    }
    cout<<s;
        
    return 0;
}