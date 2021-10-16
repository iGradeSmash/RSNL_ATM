// RSNL_ATM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int CustomerAccountNumber = 12345;
int pinNumber = 54321;
int AccountBalance = 0;

bool ValidateCustomerDetails() {

    int InputAccountNumber = -1;
    int InputPinNumber = -1;
    bool isAccountInvalid = true;
    bool isPinInvalid = true;

    cout << "Welcome!" << endl;

    while (isAccountInvalid) {

        cout << "Please enter your Bank account number: ";
        cin >> InputAccountNumber;

        if (InputAccountNumber == CustomerAccountNumber) {
            isAccountInvalid = false;
        }
        else {
            cout << "Invalid Account Number! Try again." << endl;
        }
    }
    int RetryCount = 3;
    while (isPinInvalid && RetryCount) {

        cout << "Enter your Customer PIN: ";
        cin >> InputPinNumber;

        if (InputPinNumber == pinNumber) {
            isPinInvalid = false;
        }
        else {
            RetryCount--;
            if (RetryCount)
                cout << "Invalid Customer PIN number! Try again." << endl;
            else
            {
                cout << "Your Account is Locked! 3 retry Reached! Try After some time." << endl;
                return false;
            }

        }

    }

    return true;

}