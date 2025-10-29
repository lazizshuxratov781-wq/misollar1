#include <iostream>
using namespace std;
int main()
{
    
    int a;
    cin>>a;
	for(int i = 0; i < a; i++){
	    cout<<endl;
            for(int j = 0; j < a; j++){
                if(i > j){
                    cout<<" ";
                }
                else{
                    if(i == 0 || i == j || j == a - 1){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
             }
    
    
        }
        
    return 0;
}