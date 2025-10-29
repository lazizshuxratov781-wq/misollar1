
#include <iostream>
using namespace std;
int main()
{
    int a;//a xotira ochildi
    cin>>a;// a xotiraga qiymat berish uchun ochildi
    int s = 1;// s xotira ochildi qiymati 1 ga teng
    for(int i = 1; i <= a; i++){//i degan xotira ochildi qiymati 1 ga teng. i dan a gacha aylansin. i ga bir qo`shilib borsin
        s = s * i;// s xotiraga i ko`paytirilsin
    }
    
    cout<<s;//s ni chiqar
    return 0;
}