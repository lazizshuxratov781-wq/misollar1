
#include <iostream>
using namespace std;
int main()
{
    int a;//a xotira ochildi qiymatni jamlash uchun
    cin>>a;//a xotiraga qiymat berish uchun ochildi
    int s = 0;//s xotira ochildi hammasini jamlash uchun uning qiymati 0 ga teng
    for(int i = a; i != 0; i = i / 10){//i degan xotira ochildi hisoblash uchun qiymati a. i teng bo`lmasin 0 ga. i butunli bo`linsin 10 ga
        s = s + 1;//s ga 1 qo`shilib borsin
    }
    cout<<s;//s ni chiqar
    return 0;
}