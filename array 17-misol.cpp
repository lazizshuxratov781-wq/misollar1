   #include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        for(int  j = i + 1; j < n; j++){
            if(arr[i] < arr[j]){
                int t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    cout<<arr[1];
    
    return 0;
}