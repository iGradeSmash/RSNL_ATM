#include "initialbalance.h"
#include "Savings.h"
#include "Checkings.h"
#include<iostream>
#include "Account.h"

using namespace std;

void initialbalance::setinitialbalance()
{
	double balance;

	cout << "Please enter your starting balance. \n $ ";
	cin >> balance;

	if (balance <= 1000.00)
	{
		cout << "The initial balance is invalid \n" << endl;
		//cout << "Insufficient funds.... you have $0.00!" << endl;
		balance = 0.00;
	}
	else
	{
		cout << "Your account is ready!";
		cout << "Your starting balance is: "<<balance << endl;
	}
}

//double getinitialbalance()
//{
//	double balance;
//		return balance;
//}