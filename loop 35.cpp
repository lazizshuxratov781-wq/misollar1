#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    int s = 0;
    for(int i = 0; i <= a; i++){
            int d = 1;
            for(int j = 0; j < i; j++){
                d = d * b;
            }
                s = s + d;
            }
    cout<<s;
    return 0;
}