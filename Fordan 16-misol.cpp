
#include <iostream>
using namespace std;
int main()
{
    int a;//xotira ochildi qiymat uchun
    cin>>a;//xotiraga qiymat berish uchun ochildi
    int b = 0;// b xotira ochildi qiymati 0
    for(int i = a; i != 0; i = i / 10){// i degan xotira ochildi qiymati a. i xotira 0 ga teng bo`lmasin. shunda i 10 ga qoldiqli bo`linsin
        b++;// b  xotiraga 1 qo`shilib borsin
    }
    int c;// c xotira ochildi
    int s = 0;// s xotira ochildi qiymati 0 ga ateng
    for(int i = a; i != 0; i = i / 10){//yangi i degan xotira ochildi qiymati a. i teng bo`lmasin 0 ga. i 10 ga qoldiqli bo`linsin.
        c = i % 10;// c xotira i xotira 10ga bo`linsin
        int t = 1;// t degan xotira ochildi qiymati 1
        for(int i = 1; i <= b; i++){// i degan xotira qiymati 1. i dan b gacha aylansin. har aylanganda 1 qo`shilib borsin
            t = t * c;// t xotira c xotiraga ko`paysin
        }
        s = s + t;// s xotiraga t xotira qo`shilsin
    }
    
    cout<<s;// s ni chiqar
    return 0;
}