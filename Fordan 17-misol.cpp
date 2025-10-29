
#include <iostream>
using namespace std;
int main()
{
    int a;//a xotira ochildi qiymatni jamlash uchun
    cin>>a;//a xotiraga qiymat berish uchun ochildi
    int s = 0;//s xotira ochildi hammasini jamlash uchun uning qiymati 0 ga teng
    for(int i = 1; i <= a; i++){//i degan xotira ochildi hisoblash uchun qiymati 1. i dan a gacha aylansin i ga 1 qo`shilib borsin
        if(a % i == 0){s = s + 1;}//agar a i ga qoldiqsiz bo`linsa s ga 1 qo`shilib borsin
    }
    cout<<s;//s ni chiqar
    return 0;
}