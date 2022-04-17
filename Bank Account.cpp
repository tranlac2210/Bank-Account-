// Name: Lac Tran

//Description: Write a complete program that demonstrates these classes by asking the user to enter the amounts of deposits 
//			 and withdrawals for a saving account and checking account.  The program should display statistics for the month, 
//			 including beginning balance, total amount of deposits, total amount of withdrawals, service charges, and the ending balance. 
//			 Print the result on screen and an output file.  

#include <iostream>
#include <iomanip>
#include <conio.h>  
#include "Bank Account.h"
#include "Cheking Account.h"
#include "Saving Account.h"

using namespace std;
//==================== Function Prototype ==================
void Menu(Saving& saving, Checking& checking);

//==================== Main ====================
int main()
{
	// Initialize saving class & checking class
	Saving saving;
	Checking checking;

	// Calling menu function
	Menu(saving, checking);

	system("pause");
	return 0;
}

//=================== Menu Function ====================
void Menu(Saving& saving, Checking& checking)
{
	int choice = 0;
	double deposit;
	double withdraw;

	do
	{
		cout << setw(20) << "********WELCOME TO BANK (TESTING VERSION)********" << endl;
		cout << "1. Savings Account Deposit" << endl;
		cout << "2. Checking Account Deposit" << endl;
		cout << "3. Savings Account Withdrawal" << endl;
		cout << "4. Checking Account Withdrawal" << endl;
		cout << "5. Update and Display Account Statistics" << endl;
		cout << "6. Exit" << endl;
		cout << "Please enter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter amount to deposit: $";
			cin >> deposit;
			saving.deposit(deposit);
			cout << endl;
			break;
		case 2:
			cout << "Enter amount to deposit: $";
			cin >> deposit;
			checking.deposit(deposit);
			cout << endl;
			break;
		case 3:
			cout << "Enter amount to withdraw: $";
			cin >> withdraw;
			saving.withdraw(withdraw);
			cout << endl;
			break;
		case 4:
			cout << "Enter amount to withdraw: $";
			cin >> withdraw;
			checking.withdraw(withdraw);
			cout << endl;
			break;
		case 5:
			cout << "SAVINGS ACCOUNT MONTHLY STATISTICS:" << endl;
			cout << "Withdrawals: " << saving.number_of_withdraw << endl;
			cout << "Deposits: " << saving.number_of_deposit << endl;
			saving.monthly_proc();
			cout << endl;
			cout << "Service Charges: " << saving.monthly_service_charges << endl;
			cout << "Ending Balance: " << fixed << setprecision(2) << saving.balance << endl << endl;
			cout << "Press any key to continue..." << endl << endl;
			
			_getch();

			cout << "CHECKINGS ACCOUNT MONTHLY STATISTICS:" << endl;
			cout << "Withdrawals: " << checking.number_of_withdraw << endl;
			cout << "Deposits: " << checking.number_of_deposit << endl;
			checking.monthly_proc();
			cout << endl;
			cout << "Ending Balance: " << fixed << setprecision(2) << checking.balance << endl << endl;
			cout << "Press any key to continue..." << endl << endl;

			_getch();
			break;
		}

	} while (choice != 6);
}
























