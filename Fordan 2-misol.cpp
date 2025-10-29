
#include <iostream>
using namespace std;
int main()
{
    int a;//Xotira ochildi
    cin>>a;//Xotiraga qiymat berish buyrug`i berildi
    int s = 0;//Yangi xotira ochildi
    for(int i = 0; i <= a; i++){//Yana yangi xotira ochildi u "0" ga teng. "0"dan "a"gacha bo`lgan sonlarga "1"ni qo`shish buyrug`i berildi.
        if(i % 2 == 0){s = s + i;}//"I"ni "2"ga bo`lish buyrug`i berildi va hamma sonlarni qo`shish buyrug`i berildi
    }
    cout<<s;//Shuni chiqarish buyrug`i berildi
    return 0;
}