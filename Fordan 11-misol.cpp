
#include <iostream>
using namespace std;
int main()
{
    int a;//xotira ochildi
    cin>>a;//xotiraga qiymat berish buyrug`i berildi
    int s = 1;//Yangi xotira ochildi uning qiymati "1"
    for(int i = 0; i < 5; i++){//Yana yangi xotira ochildi u "0"ga teng. "i"dan "5"gacha '5 ni inobatga olgan holda' bo`lgan sonlarga "1"ni qo`shish buyrug`i berildi.
        s = s * a;//"s"ga "a"ni ko`paytirish buyrug`i berildi
    }
    cout<<s;//Shuni chiqarish buyrug`i berildi
    return 0;
}