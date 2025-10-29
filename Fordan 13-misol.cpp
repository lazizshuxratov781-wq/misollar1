
#include <iostream>
using namespace std;
int main()
{
    int a,b;//qiymat uchun xotira ochildi
    cin>>a>>b;//qiymat berish uchun ochildi
    int s = 0;// s degan xotira ochildi hammasini jamlash uchun
    int t = 0;// t degan xotira ochildi hisoblash uchun
    for(int i = 1; i <= b; i++){// i degan yangi xotira ochildi qiymati 1 ga teng. i dan b gacha aylansin. i ga 1 qo`shilib borsin
        t = t * 10 + a;// t ni 10 ga ko`paytirib unga berilgan sonni qo`sh
        s = s + t;// s xotiraga hammasin qo`sh
    }
    cout<<s;// s ni chiqar
    return 0;
}