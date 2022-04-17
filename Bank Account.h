// Name: Lac Tran

#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//========================== Bank Account Class ==========================
class Bank 
{
public:
	double balance;
	int	number_of_deposit;
	int number_of_withdraw;
	double annual_interest_rate;
	double monthly_service_charges;

//public:
	Bank();
	virtual void deposit(double amount);
	virtual void withdraw(double amount);
	virtual void calcInt();
	virtual void monthlyProc();

};

//========================== Default Constructor ==========================
Bank::Bank()
{
	balance = 0.0;
	number_of_deposit = 0;
	number_of_withdraw = 0;
	annual_interest_rate = 0.05;
	monthly_service_charges = 0.0;

}

//========================== Deposit Member Function ==========================
void Bank::deposit (double amount)
{
	balance += amount;
	number_of_deposit++;
}

//========================== Withdraw Member Function ==========================
void Bank::withdraw(double amount)
{
	balance -= amount;
	number_of_withdraw++;
}

//========================== Calculation Member Function ==========================
void Bank::calcInt()
{
	double monthly_interest_rate, monthly_interest;
	
	monthly_interest_rate = (annual_interest_rate / 12);
	monthly_interest = balance * monthly_interest_rate;
	balance = balance + monthly_interest;
}

//========================== Calculation Member Function ==========================
void Bank::monthlyProc()
{
	balance -= monthly_service_charges;
	calcInt();
	number_of_deposit = 0;
	number_of_withdraw = 0;
	monthly_service_charges = 0;
}