#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a > 0){
        if(b > 0){
            if(c > 0){
                cout<<3;
            }
        }
    }
    if(a < 0){
        if(b > 0){
            if(c > 0){
                cout<<2;
            }
        }
    }
    if(a > 0){
        if(b < 0){
            if(c > 0){
                cout<<2;
            }
        }
    }
    if(a > 0){
        if(b > 0){
            if(c < 0){
                cout<<2;
            }
        }
    }
    
    
    if(a > 0){
        if(b < 0){
            if(c < 0){
                cout<<1;
            }
        }
    }
    if(a < 0){
        if(b > 0){
            if(c > 0){
                cout<<1;
            }
        }
    }
    if(a < 0){
        if(b < 0){
            if(c < 0){
                cout<<0;
            }
        }
    }
    if(a < 0){
        if(b > 0){
            if(c < 0){
                cout<<1;
            }
        }
    }
    if(a < 0){
        if(b < 0){
            if(c > 0){
                cout<<1;
            }
        }
    }
    
    

    return 0;
}