
#include <iostream>
using namespace std;
int main()
{
    int a,b;//xotira ochildi
    cin>>a>>b;//xotiraga qiymat berish uchun
    int s = 1;// s xotira ochildi barchasini yig`ish uchun
    for(int i = 1; i <= b; i++){// i xotira ochildi u 1ga teng. i  b gacha aylansin. i ga 1 qo`shib borilsin
        s = s * a;// s ga a ko`paytirilsin
    }
    cout<<s;// s chiqarilsin
    return 0;
}