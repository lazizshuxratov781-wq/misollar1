
#include <iostream>
using namespace std;
int main()
{
    int a;//a xotira ochildi
    cin>>a;// a xotiraga qiymat berish uchun ochildi
    int b = 0;// b xotira ochildi
    for(int i = a; i != 0; i = i / 10){//i degan xotira ochildi qiymati a ga teng. i teng bo`lmasin 0 ga. i butunli bo`linsin 10 ga
        b = b + 1;//b ga 1 qo`shilib borsin
    }
    int c;// c degan xotira ochildi
    int s = 0;// s degan xotira ochildi qiymati 0 ga teng
    for(int i = a; i != 0; i = i / 10){//i degan xotira ochildi qiymati a ga teng. i teng bo`lmasin 0 ga. i butunli bo`linsin 10 ga.
        c = i % 10;//c xotira teng i qoldiqsiz bo`linsin 10 ga
        int t = 1;// t degan xotira ochildi qiymati 1 ga teng
        for(int i = 1; i <= b; i++){// i degan xotira qiymati 1 ga teng. i den b gacha aylansin. har aylanganda i ga 1 qo`shilib borsin
            t = t + i;//t xotiraga i qo`shilib borsin
        }
        s = s + t;//s xotiraga t qo`shilib borsin
    }
    
    cout<<s;//s ni chiqar
    return 0;
}