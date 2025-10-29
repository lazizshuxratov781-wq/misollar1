#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a % 3 == 0 && a % 4 == 0){
        cout<<"Bu son 3ga ham 4ga ham bo`linadi";
    }
    else{
        cout<<"Bo`linmaydi";
    }
    
    return 0;
}