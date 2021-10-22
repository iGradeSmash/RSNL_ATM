#pragma once
#include "Account.h"

class Checkings : public Account  //inheritence from base class 'account'
{
private: //private interface of the derived object.
	double c_balance = 0;
	double deposit;

public: //public interface of the derived object.
	
	void setBalance();
	double getBalance() const;
	void setWithdraw();
	void setDeposit();
	

};

