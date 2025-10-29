
#include <iostream>
using namespace std;
int main()
{
    int a;//qiymat uchun xotira ochildi
    cin>>a;//qiymat berish uchun ochildi
    int s = 0;// s degan xotira ochildi hammasini jamlash uchun
    for(int i = 1; i < 6; i++){// i degan yangi xotira ochildi qiymati 1 ga teng. i dan 6 gacha aylansin. i ga 1 qo`shilib borsin
        if(a % i == 0){s = s + i;}// agar a xotira i ga qoldiqsiz bo`linsa s xotiraga jamlansin
    }
    cout<<s;// s ni chiqar
    return 0;
}