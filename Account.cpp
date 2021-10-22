// Pulls Account Information
#include "Account.h"
#include <string>
#include <iostream>

using namespace std; ;

void  Account::setAccountName(string firstname, string lastname)
{
	firstName = firstname;
	lastName = lastname;
}

string Account::getAccountName()
{
	accountName = firstName + " " + lastName;
	return(accountName);
}

void Account::setAccountNumber(int accno)
{
	accNumber = accno;
}

bool Account::login() //Log In Validation With Predefined Information 
{
	int givenAccountNumber = -1;
	int givenPinNumber = -1;
	bool isAccountInvalid = true;
	bool isPinInvalid = true;

	cout << "-----------------------------" << endl;
	cout << "|          Welcome!         |" << endl;
	cout << "-----------------------------" << endl;

	while (isAccountInvalid) {

		cout << "Please Enter Your Account Number... ";
		cin >> givenAccountNumber;

		if (givenAccountNumber == accountNumber) {
			isAccountInvalid = false;
		}
		else {
			cout << "Invaid Entry!vPlease Check Account Number And Try Again..." << endl;
		}
	}

	while (isPinInvalid) {

		cout << "\nEnter your PIN: ";
		cin >> givenPinNumber;

		if (givenPinNumber == pinNumber) {
			isPinInvalid = false;
		}
		else {
			cout << "PIN Combination Invalid..." << endl;
		}
	}

	return true;

}

