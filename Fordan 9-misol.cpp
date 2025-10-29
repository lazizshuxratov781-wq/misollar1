
#include <iostream>
using namespace std;
int main()
{
    int a,b;// a va b xotira ochildi
    cin>>a>>b;// a va b xotiraga qiymat berish buyrug`i berildi
    int s = 0;//Yangi xotira ochildi
    for(int i = a; i < b; i++){//Yana yangi xotira ochildi u "a" ga teng. "i"dan "b"gacha 'b ni inobatga olmagan holda' bo`lgan sonlarga "1"ni qo`shish buyrug`i berildi.
        if(i % 2 == 0 && i % 3 == 0){s = s + 1;}//"I"ni "2"ga va "I"ni "3"ga bo`lish buyrug`i berildi."s"ga "1"ni qo`shish buyrug`i berildi
    }
    cout<<s;//Shuni chiqarish buyrug`i berildi
    return 0;
}