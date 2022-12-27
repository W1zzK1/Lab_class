#pragma once
#include <Account.cpp>
#include <string>
#include <iostream> 
using namespace std;

class Account
{
	string ownerSurname;
	string accountNumber;
	float accrualPercentage;
	int amountRubles;

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

	static Account operator + (Account amountRubles, int s) {
		return amountRubles.amountRubles + s;
	}

	void changeOwnerSurname();
	string getOwnerSurname();
	int getAmountRubles();
	float getAccrualPercentage();
	string getAccountNumber();
	void getOwner();
	void withdrawMoneyFromAccount();
	void depositMoneyToAccount();
	void accruePercentage();
	int convertAmountToDollars();
	int convertAmountInEuros();
	void amountInWords();
};
