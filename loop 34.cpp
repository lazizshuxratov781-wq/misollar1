#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    int s = 0;
    for(int i = 1; i <= a; i++){
            int daraja = 1;
            for(int j = 1; j <= i * 2 - 1; j++){
                daraja = daraja * b;
            }
            if(i % 2 != 0){
                s = s + daraja;
            }
            else{
                s = s - daraja;
            }
        }
    cout<<s;
    return 0;
}