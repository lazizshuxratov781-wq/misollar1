
#include <iostream>
using namespace std;
int main()
{
    int a,b;// a va b xotira ochildi
    cin>>a>>b;// a va b xotiraga qiymat berish buyrug`i berildi
    int s = 0;//Yangi xotira ochildi
    for(int i = a; i < b; i++){//Yana yangi xotira ochildi u "a" ga teng. "i"dan "b"gacha 'b ni inobatga olmagan holda' bo`lgan sonlarga "1"ni qo`shish buyrug`i berildi.
        s = s + i;//Hamma sonlarni qo`shish buyrug`i berildi
    }
    cout<<s;//Shuni chiqarish buyrug`i berildi
    return 0;
}