// Name: Juan Perez

#pragma once
#include <iostream>
#include "Bank Account.h"
#include "Cheking Account.h"

using namespace std;

//===================== Saving Class =====================
class Saving : public Bank 
{
public:
	bool status_checking;
	void deposit(double amount);
	void withdraw(double amount);
	void monthly_proc();

};

//===================== Deposit Member Function =====================
void Saving::deposit (double amount)
{
	if (amount + balance > 25)
	{
		status_checking = 1;
		Bank::deposit(amount);
	}
}

//===================== Withdraw Member Function =====================
void Saving::withdraw(double amount)
{
	if (status_checking = 0 || balance < 25)
	{	
		cout << "Balance must above $25." << endl;
		cout << "You are not be able to withdraw!" << endl;
	}
	else
	{
		Bank::withdraw(amount);
	}

}

//===================== Monthly Proc Member Function =====================
void Saving::monthly_proc()
{
	if (number_of_withdraw > 4)
	{
		monthly_service_charges = number_of_withdraw - 4;
	}
	if (balance < 25)
	{
		status_checking = 0;
		cout << "Service Charge: $" << monthly_service_charges << endl;
	}
	Bank::monthlyProc();

}
