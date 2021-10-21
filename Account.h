#pragma once
#include <string>
using namespace std;

class Account
{
private: //private interface of the derived object
	string firstName, lastName;
	string accountName;
	int accNumber; //This accountNumber may become obsolete.

	int accountNumber = 20102136; //User Account Number
	int pinNumber = 2021; //User PIN for login


public: //public interface of the derived object
	void setAccountName(string firstname, string lastname);
	string getAccountName();
	void setAccountNumber(int accno);
	bool login(); //test to see whether it is true of false

};

