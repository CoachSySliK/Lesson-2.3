#include <iostream>

using namespace std;

int main()
{
    int totalMoney = 8005234;
    int numderOfEntrances = 6;
    int numberOfApartments = 30;
    int totalApartments = numderOfEntrances * numberOfApartments;



    cout << "Приветствуем вас в калькуляторе квартплаты!\n";
    cout << "\nВведите сумму, указанную в квитанции : " << totalMoney;
    cout << "\nСколько подъездов в вашем доме? " << numderOfEntrances;
    cout << "\nСколько квартир в каждом подъезде? " << numberOfApartments;
    cout << "\n-----Считаем-----";
    cout << "\nКаждая квартира должна платить по " << totalMoney / totalApartments << " руб"<< "\n";

}
