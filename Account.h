#pragma once
#include "Transaction.h"
#include <vector>
#include <string>
using namespace std;

class Account
{
private: //private interface of the derived object
	string firstName, lastName;
	string accountName;
	int accNumber; 

	int accountNumber = 20102136; //User Account Number
	int pinNumber = 2021; //User PIN for Access
	double deposit;


public: //public interface of the derived object

	void setAccountName(string firstname, string lastname);
	string getAccountName();
	void setAccountNumber(int accno);
	bool login(); //Validate Input
	//void setinitialbalance() const;
	//double getinitialbalance();
	//vector<string>log(); // Vector to be used to stored transactions
	//string report ();  //Report function to be used to format transactions for display

};

