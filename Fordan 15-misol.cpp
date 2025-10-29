
#include <iostream>
using namespace std;
int main()
{
    int a;//qiymat uchun xotira ochildi
    cin>>a;//qiymat berish uchun ochildi
    int s = 0;// s degan xotira ochildi hammasini jamlash uchun
    for(int i = 0; i <= a; i++){// i degan yangi xotira ochildi qiymati 0 ga teng. i dan a gacha aylansin. i ga 1 qo`shilib borsin
        s = s + i * i;// s xotiraga i qo`shilsin va i ga ko`paytirilsin
    }
    cout<<s;// s ni chiqar
    return 0;
}