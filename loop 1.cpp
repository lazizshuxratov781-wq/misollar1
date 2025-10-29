#include <iostream>
using namespace std;
int main()
{
    double a;
    cin>>a;
    double s = 0;
    for(double i = 1; i <= a; i++){
        s = s + 1 / i;
    }
    cout<<s;
    return 0;
}