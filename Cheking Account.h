// Name: Juan Perez

#pragma once
#include <iostream>
#include "Bank Account.h"
#include "Saving Account.h"

using namespace std;

//===================== Checking Class =====================
class Checking : public Bank
{
public:
	void withdraw(double amount);
	void monthly_proc();

};

//===================== Withdraw Member Class =====================
void Checking::withdraw(double amount)
{
	if (balance - amount < 0)
	{
		balance -= 15;
		monthly_service_charges += 15;

	}
	Bank::withdraw(amount);

}

//===================== Monthly Proc Member Class =====================
void Checking::monthly_proc()
{
	monthly_service_charges += 5 + 0.1 * number_of_withdraw;
	cout << "Service Charges: $" << monthly_service_charges;
	Bank::monthlyProc();

}

