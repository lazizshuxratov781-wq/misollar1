
#include <iostream>
using namespace std;
int main()
{
    int a;//a xotira ochildi
    cin>>a;// a xotiraga qiymat berish uchun ochildi
    int s = 0;// s xotira ochildi qiymati 0 ga teng
    for(int i = a; i != 0; i = i / 10){//i degan xotira ochildi qiymati a ga teng. i teng bo`lmasin 0 ga. i butunli bo`linsin 10 ga
        s = s * 10 + i % 10;// s ni 10 ga ko`paytirib, i 10 ga butunli bo`lingani qo`shilsin 
    }
    
    cout<<s;//s ni chiqar
    return 0;
}