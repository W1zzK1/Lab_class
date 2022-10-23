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
	void setOwner(string ownerSurname,
		string accountNumber,
		float accrualPercentage,
		int amountRubles) {
		if ((this->amountRubles + amountRubles) < 9999) {
			this->ownerSurname = ownerSurname;
			this->accountNumber = accountNumber;
			this->accrualPercentage = accrualPercentage;
			this->amountRubles += amountRubles;
		}
		else {
			cout << "������������ ����� �������" << endl;
		}
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
			cout << "������� ����������� ������";
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
			cout << "�� ����� ����� ��� �����";
		}
		else {
			amountRubles -= amount;
		}
	}
	void depositMoneyToAccount(int amount) {
		if ((this->amountRubles + amountRubles) > 9999) {
			cout << "������������ ����� �������" << endl;
		}
		else {
			amountRubles += amount;
		}
		
	}
	void accruePercentage(float percentage) {
		accrualPercentage += percentage;
	}
	int convertAmountToDollars() {
		int amountDollars = amountRubles * 0.62;
		cout << "Your amount in dollars : " << amountDollars;
		return amountDollars;
	}
	int convertAmountInEuros() {
		int amountEuros = amountRubles * 0.60;
		cout << "Your amount in euros : " << amountEuros;
		return amountEuros;
	}
	void amountInWords() {
		setlocale(LC_ALL, "Russian");
		if (amountRubles < 0) {
			cout << "�� ����� ����� ��� �����";

		}switch (amountRubles / 1000)
		{
		case 1: cout << "���� ������ "; break;
		case 2: cout << "��� ������ "; break;
		case 3: cout << "��� ������ "; break;
		case 4: cout << "������ ������ "; break;
		case 5: cout << "���� ����� "; break;
		case 6: cout << "����� ����� "; break;
		case 7: cout << "���� ����� "; break;
		case 8: cout << "������ ����� "; break;
		case 9: cout << "������ ����� "; break;
		}
		switch ((amountRubles % 1000) / 100)
		{
		case 1: cout << "��� "; break;
		case 2: cout << "������ "; break;
		case 3: cout << "������ "; break;
		case 4: cout << "��������� "; break;
		case 5: cout << "������ "; break;
		case 6: cout << "�������� "; break;
		case 7: cout << "������� "; break;
		case 8: cout << "��������� "; break;
		case 9: cout << "��������� "; break;
		}switch ((amountRubles % 100) / 10)
		{
		case 2: cout << "�������� "; break;
		case 3: cout << "�������� "; break;
		case 4: cout << "����� "; break;
		case 5: cout << "�������� "; break;
		case 6: cout << "���������� "; break;
		case 7: cout << "��������� "; break;
		case 8: cout << "����������� "; break;
		case 9: cout << "��������� "; break;
		}
		if (amountRubles % 100 >= 10 & amountRubles % 100 < 20) {
			switch (amountRubles % 100) {
			case 10: cout << "������"; break;
			case 11: cout << "����������"; break;
			case 12: cout << "����������"; break;
			case 13: cout << "����������"; break;
			case 14: cout << "������������"; break;
			case 15: cout << "����������"; break;
			case 16: cout << "�����������"; break;
			case 17: cout << "����������"; break;
			case 18: cout << "������������"; break;
			case 19: cout << "������������"; break;
			}
		}
		else {
			switch (amountRubles % 10)
			{
			case 1: cout << "����\n"; break;
			case 2: cout << "���\n"; break;
			case 3: cout << "���\n"; break;
			case 4: cout << "������"; break;
			case 5: cout << "����"; break;
			case 6: cout << "�����"; break;
			case 7: cout << "����"; break;
			case 8: cout << "������"; break;
			case 9: cout << "������"; break;
			}
		}
	}
};