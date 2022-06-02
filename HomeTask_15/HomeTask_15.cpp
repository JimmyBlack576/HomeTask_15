#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int pizsum, pizza, drink, drinksum,pizord;
    float pzpr1 = 10.50, pzpr2 = 12.50,
        pzpr3 = 9.90, pzpr4 = 10.50, drpr1 = 1.50,
        drpr2 = 2.10, drpr3 = 1.20,  temp, temp1;
    float priceall = 0;

    cout << "\tДобро пожаловать в пиццерию \"Холестерин\"\n\n\n";
    cout << "\tКакую пиццу вы бы хотели заказать:\n";
    cout << "1. Пицца \"Деревенская\" --------------------- 10.50$\n"
        << "2. Пицца \"Фирменная\" ----------------------- 12.50$\n"
        << "3. Пицца \"Японская\" ------------------------ 9.90$\n"
        << "4. Пицца \"Нелепицца\" ----------------------- 10.50$\n";
    cin >> pizza;
    cout << "\tВведите количество:\n";
    cin >> pizsum;
    cout << "\tВыберите напиток: \n"
        << "1. Лимонад --------------------------------- 1.50$\n"
        << "2. Сок в ассортименте ---------------------- 2.10$\n"
        << "3. Чай ------------------------------------- 1.20$\n";
    cin >> drink;
    cout << "\tВведите количество:\n";
    cin >> drinksum;

    switch (pizza) {
    case 1:
        temp = pzpr1;
        break;
    case 2:
        temp = pzpr2;
        break;
    case 3:
        temp = pzpr3;
        break;
    case 4:
        temp = pzpr4;
        break;
    default:
        temp = 0;
        cout << "Нет такого пункта в меню!\n";
        break;
    }

    switch (drink) {
    case 1:
        temp1 = drpr1;
        break;
    case 2:
        temp1 = drpr2;
        break;
    case 3:
        temp1 = drpr3;
        break;
    default:
        temp = 0;
        cout << "Нет такого пункта в меню!\n";
        break;
    }
    pizord = pizsum;
    if (pizsum >= 5) {
        cout << "\tУ нас проходит акция 5 = 4!\n"
            << "\tИ вы в ней участвуете!\n";
        pizsum = pizsum - pizsum / 5;
    }
    priceall = temp * pizsum;

    if (drinksum >= 3 && temp1 > 2) {
        cout << "\tДля вас действует скидка на напитки 15%!\n";
        priceall = priceall + drinksum * temp1 * (1 / 0.15);

    }
    else {priceall = priceall + drinksum * temp1;}

    if (priceall > 50) {
        cout << "\tВы заказали столько всего!\n"
            << "\tДержите скидку 20%!\n";

        priceall = priceall * (1 - 0.2);
    }
    cout << "\tВаш заказ:\n\n"
        << "Пицца - " << pizza << " - " << pizord << " шт - " << temp << " $ \n"
        << "Напитки - " << drink << " - " << drinksum << " шт - " << temp1 << " $ \n"
        << "Итого - " << priceall << " $ \n"
        << "Приятного Аппетита!" << endl;

}
