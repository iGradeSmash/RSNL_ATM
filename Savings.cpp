#include "Savings.h"
#include "iostream"


void Savings::setSavingsBalance(double deposit) //This function sets a balance for the savings account and initialized the variable deposit.
{
	s_balance = s_balance + deposit;
}


double Savings::getSavingsBalance() const //This function returns the balance on the savings account
{
	return s_balance;
}

void Savings::setWithdraw() // Sets a withdrawal amount for the savings account
{
	double wdraw = 0;
	cout << "Enter withdrawal amount: $";
	cin >> wdraw;

	if (s_balance >= wdraw) {
		s_balance = s_balance - wdraw;
		cout << "Your new balance is: $" << s_balance << endl;
	}
	else {
		cout << "Not able to withdraw $" << wdraw << " from account." << endl;
		cout << "Insufficient funds..." << endl;
	}
}

void Savings::setDeposit() //sets a deposit amount for the savings account
{
	double dep = 0;
	cout << "Enter deposit amount: $";
	cin >> dep;
	s_balance = s_balance + dep;
	cout << "Your new balance is: $" << getSavingsBalance() << endl;
}



