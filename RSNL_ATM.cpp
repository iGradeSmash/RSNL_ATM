// RSNL_ATM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Account.h"
#include "Checkings.h"
#include "Savings.h"
#include "initialbalance.h"
using namespace std;

//Function Prototypes

int mainMenu() { //Function for Main Menu 

	int choice = 0;

	cout << "\n-----------------------------" << endl;
	cout << "|Please Select Transaction Option.... |" << endl;
	cout << "-----------------------------" << endl;
	cout << "| 1. Deposit                |" << endl;
	cout << "| 2. Withdraw               |" << endl;
	cout << "| 3. Check Balance          |" << endl;
	cout << "| 4. [Exit]                 |" << endl;
	cout << "-----------------------------" << endl;

	cin >> choice;
	return choice;
}

int main()
{
	//class-objects instantiation
	Account accObj;
	Checkings checkObj;
	Savings savObj;
	//initialbalance iniObj;

	//accObj.login(); //call for login page

	accObj.setAccountName("Mark", "Brown"); //  Predefined Name
	string fullName = accObj.getAccountName();

	cout << "-----------------------------" << endl;
	cout << "|    Welcome, " << fullName << "    |" << endl;
	cout << "-----------------------------" << endl;

	/*cout<<"Select account for setup starting balance:";
	for (int i = 0; i < 2; i++) {
		iniObj.setinitialbalance();
	}*/
	bool isNotFinished = true;
	int accountChoice = -1;

	//Loop for Menu Unless Exit is Selected
	do {
		switch (mainMenu())
		{
			//Set Initial Balance Option
		case 0:
			cout << "-------------------------------------------------" << endl;
			cout << "| Please Select Account Type... |" << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "| 1. Checking                                   |" << endl;
			cout << "| 2. Savings                                    |" << endl;
			cout << "-------------------------------------------------" << endl;

			cin >> accountChoice;
			switch (accountChoice) { //Nested Switch Case 
			case 1:
				checkObj.setBalance();
				break;
			case 2:
				savObj.setSavingsBalance();
				break;
			default:
				cout << "Invalid choice! Please select again." << endl;
				break;
			}


			break;
			
			
			//Deposit Option
		case 1:
			cout << "-------------------------------------------------" << endl;
			cout << "| Please Select Account Type... |" << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "| 1. Checking                                   |" << endl;
			cout << "| 2. Savings                                    |" << endl;
			cout << "-------------------------------------------------" << endl;

			cin >> accountChoice;
			switch (accountChoice) { //Nested Switch Case 
			case 1:
				checkObj.setDeposit();
				break;
			case 2:
				savObj.setDeposit();
				break;
			default:
				cout << "Invalid choice! Please select again." << endl;
				break;
			}


			break;

			// Widthdraw Option
		case 2:
			cout << "-------------------------------------------------" << endl;
			cout << "| Please Select Account Type...       |" << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "| 1. Checking                                   |" << endl;
			cout << "| 2. Savings                                    |" << endl;
			cout << "-------------------------------------------------" << endl;

			cin >> accountChoice;
			switch (accountChoice) { //Nested Switch Case 
			case 1:
				checkObj.setWithdraw();
				break;
			case 2:
				savObj.setWithdraw();
				break;
			default:
				cout << "Invalid choice! Please select again." << endl;
				break;
			}

			break;
		case 3:

			// Check Balance Option
			cout << "-------------------------------------------------" << endl;
			cout << "| Please Select Account Type...              |" << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "| 1. Checking                                   |" << endl;
			cout << "| 2. Savings                                    |" << endl;

			cout << "-------------------------------------------------" << endl;

			cin >> accountChoice;
			switch (accountChoice)
			{
			case 1:
				cout << "Your available Checking balance is $" << checkObj.getBalance();
				break;

			case 2:
				cout << "Your available Savings balance is $" << savObj.getSavingsBalance();
				//cout << "Your available Savings balance is $" <<savObj.getinitialbalance();
				break;

			default:
				cout << "Invalid choice! Please select again." << endl;
				break;

			}

			break;

			// EXIT OPTION
		case 4:
			cout << "Thank you for Choosing RSNL BANK" << endl;
			cout << "Project By: Randale, Nicola, Lenice & Shoeb" << endl;
			isNotFinished = false;
			break;

		default:
			cout << "Invalid choice! Please select again." << endl;
			break;
		}

	} while (isNotFinished);


	system("pause");
	return 0;

}