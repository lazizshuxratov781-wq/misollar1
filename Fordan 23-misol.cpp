
#include <iostream>
using namespace std;
int main()
{
    int a;//a xotira ochildi
    cin>>a;// a xotiraga qiymat berish uchun ochildi
    int b = 0;// b degan xotira ochildi qiymati 0 ga teng
    int c = 1;// c degan xotira ochildi qiymati 1 ga teng
    int d = 0;// d degan xotira ochildi qiymati 0 ga teng
    for(int i = 2; i < a; i++){// i degan xotira ochildi qiymati 2 ga teng. idan agacha aylansin "a ni hisobga olamagan holda" i ga 1 qo`shilib borsin
        d = d + b + c;// d xotiraga b va c qo`shilsin
        int t = b;// t degan xotira ochilsin qiymati b ga teng bo`lsin
        b = c;// b teng bo`lsin c ga
        c = c + t;//c ga t qo`shilsin
    }
    cout<<d;//d ni chiqar
    return 0;
}