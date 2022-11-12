#pragma once
#include <string>
#include <iostream> 
using namespace std;

class Account
{
	string ownerSurname;
	string accountNumber;
	float accrualPercentage;
	int amountRubles = 0;

public:
	Account(string ownerSurname,
		string accountNumber,
		float accrualPercentage,
		int amountRubles) {
			this->ownerSurname = ownerSurname;
			this->accountNumber = accountNumber;
			this->accrualPercentage = accrualPercentage;
			this->amountRubles += amountRubles;
	}
    setlocale(LC_ALL, "Russian");

    Account account("Demidov", "12345", 10.0, 5000);
    void getOwner();
    void changeOwnerSurname("Logvinov");
    void getOwner();
    void withdrawMoneyFromAccount(1000);
    void getOwner();
    void depositMoneyToAccount(2000);
    void getOwner();
    int convertAmountToDollars();
    int convertAmountInEuros();
    void amountInWords();
    return 0;
};
