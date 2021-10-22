#pragma once
#include "Account.h"
#include "initialbalance.h"

class Savings : public Account  //inheritence from base class 'account'
{
private:
	double s_balance = 0;
	double deposit;

public:
	//void setinitialbalance() const;
	//double getinitialbalance(double s_balance, double deposit, double balance);
	void setSavingsBalance();
	double getSavingsBalance() const;
	void setWithdraw();
	void setDeposit();

};


