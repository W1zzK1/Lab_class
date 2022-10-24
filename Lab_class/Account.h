#pragma once
#include <string>
#include <iostream>
using namespace std;

class Account
{
private:
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
	void changeOwnerSurname(string ownerSurname) {
		this->ownerSurname = ownerSurname;
	};
	string getOwnerSurname() {
		return this->ownerSurname;
	}
	int getAmountRubles() {
		return this->amountRubles;
	}
	float getAccrualPercentage() {
		return this->accrualPercentage;
	}
	string getAccountNumber() {
		return this->accountNumber;
	}
	void getOwner() {
		if ((ownerSurname == "") || (accountNumber == "") || (accrualPercentage == 0) || (amountRubles == 0)) {
			cout << "Введите недостающие данные";
		}
		else if (amountRubles > 9999) {
			cout << "Недопустимая сумма баланса" << endl;
		}
		else {
			cout << "Surname : " << ownerSurname << endl;
			cout << "Account number : " << accountNumber << endl;
			cout << "Accrual percentage : " << accrualPercentage << endl;
			cout << "Amount Rubles : " << amountRubles;
		}
		
	}

	void withdrawMoneyFromAccount(int amount) {
		if (amountRubles == 0) {
			cout << "На вашем счету нет денег";
		}
		else {
			amountRubles -= amount;
		}
	}
	void depositMoneyToAccount(int amount) {
		if ((this->amountRubles + amountRubles) > 9999) {
			cout << "Недопустимая сумма баланса" << endl;
		}
		else {
			amountRubles += amount;
		}
		
	}
	void accruePercentage(float percentage) {
		accrualPercentage += percentage;
	}
	int convertAmountToDollars() {
		if (amountRubles > 9999) {
			cout << "Недопустимая сумма баланса" << endl;
		}
		else {
			int amountDollars = amountRubles * 0.62;
			cout << "Your amount in dollars : " << amountDollars;
			return amountDollars;
		}
	}
	int convertAmountInEuros() {
		if (amountRubles > 9999) {
			cout << "Недопустимая сумма баланса" << endl;
		}
		else {
			int amountEuros = amountRubles * 0.60;
			cout << "Your amount in euros : " << amountEuros;
			return amountEuros;
		}
	}
	void amountInWords() {
		setlocale(LC_ALL, "Russian");
		if (amountRubles < 0) {
			cout << "На вашем счету нет денег";

		}switch (amountRubles / 1000)
		{
		case 1: cout << "Одна тысяча "; break;
		case 2: cout << "Две тысячи "; break;
		case 3: cout << "Три тысячи "; break;
		case 4: cout << "Четыре тысячи "; break;
		case 5: cout << "Пять тысяч "; break;
		case 6: cout << "Шесть тысяч "; break;
		case 7: cout << "Семь тысяч "; break;
		case 8: cout << "Восемь тысяч "; break;
		case 9: cout << "Девять тысяч "; break;
		}
		switch ((amountRubles % 1000) / 100)
		{
		case 1: cout << "Сто "; break;
		case 2: cout << "Двести "; break;
		case 3: cout << "Триста "; break;
		case 4: cout << "Четыреста "; break;
		case 5: cout << "Пятсот "; break;
		case 6: cout << "Шестьсот "; break;
		case 7: cout << "Семьсот "; break;
		case 8: cout << "Восемьсот "; break;
		case 9: cout << "Девятьсот "; break;
		}switch ((amountRubles % 100) / 10)
		{
		case 2: cout << "двадцать "; break;
		case 3: cout << "тридцать "; break;
		case 4: cout << "сорок "; break;
		case 5: cout << "пятдесят "; break;
		case 6: cout << "шестьдесят "; break;
		case 7: cout << "Семьдесят "; break;
		case 8: cout << "Восемьдесят "; break;
		case 9: cout << "Девяносто "; break;
		}
		if (amountRubles % 100 >= 10 & amountRubles % 100 < 20) {
			switch (amountRubles % 100) {
			case 10: cout << "десять"; break;
			case 11: cout << "одинадцать"; break;
			case 12: cout << "двенадцать"; break;
			case 13: cout << "тринадцать"; break;
			case 14: cout << "четырнадцать"; break;
			case 15: cout << "пятнадцать"; break;
			case 16: cout << "шестнадцать"; break;
			case 17: cout << "семнадцать"; break;
			case 18: cout << "восемнадцать"; break;
			case 19: cout << "девятнадцать"; break;
			}
		}
		else {
			switch (amountRubles % 10)
			{
			case 1: cout << "один\n"; break;
			case 2: cout << "два\n"; break;
			case 3: cout << "три\n"; break;
			case 4: cout << "четыре"; break;
			case 5: cout << "пять"; break;
			case 6: cout << "шесть"; break;
			case 7: cout << "семь"; break;
			case 8: cout << "восемь"; break;
			case 9: cout << "девять"; break;
			}
		}
	}
};
