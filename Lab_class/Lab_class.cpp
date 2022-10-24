#include <iostream>
#include "Account.h"
using namespace std;
/*
12. Реализовать класс Account, представляющий собой банковский счет. 
В классе должны быть четыре поля: фамилия владельца, номер счета, 
процент начисления и сумма в рублях. Открытие нового счета 
выполняется операцией инициализации. Необходимо выполнить 
следующие операции: сменить владельца счета, снять некоторую 
сумму денег со счета, положить деньги на счет, начислить проценты, 
перевести сумму в доллары, перевести сумму в евро, получить сумму прописью (преобразовать в численное).
*/
int main()
{
    setlocale(LC_ALL, "Russian");

    Account account("Demidov", "12345", 10.0, 5000);
    account.getOwner();
    cout << "" << endl;
    cout << "" << endl;
    account.changeOwnerSurname("Logvinov");
    account.getOwner();
    cout << "" << endl;
    cout << "" << endl;
    account.withdrawMoneyFromAccount(1000);
    account.getOwner();
    cout << "" << endl;
    cout << "" << endl;
    account.depositMoneyToAccount(2000);
    account.getOwner();
    cout << "" << endl;
    cout << "" << endl;
    account.convertAmountToDollars();
    cout << "" << endl;
    cout << "" << endl;
    account.convertAmountInEuros();
    cout << "" << endl;
    cout << "" << endl;
    account.amountInWords();
    return 0;
}
