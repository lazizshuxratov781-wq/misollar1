
#include <iostream>
using namespace std;
int main()
{
    int a,b;// a va b xotira ochildi
    cin>>a>>b;// a va b xotiraga qiymat berish buyrug`i berildi
    int s = 0;//Yangi xotira ochildi
    for(int i = 1; i <= b; i++){//Yana yangi xotira ochildi u "1"ga teng. "i"dan "b"gacha 'b ni inobatga olgan holda' bo`lgan sonlarga "1"ni qo`shish buyrug`i berildi.
        if(i > 0){s = s + 1;}//"I" "0"dan katta bo`lsa "s"ga "1"ni qo`shish buyrug`i berildi
    }
    cout<<s;//Shuni chiqarish buyrug`i berildi
    return 0;
}