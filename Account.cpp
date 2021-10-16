#include "Account.h"

int main() {

    if (ValidateCustomerDetails()) {

        int isNotFinished = true;

        do {

            switch (DisplayMenu()) {
            case 1:
                DisplayAccountBalance();
                break;
            case 2:
                WithDrawMoneyFromAccount();
                break;
            case 3:
                DepositMoneyInAccount();
                break;
            case 4:
                isNotFinished = false;
                break;
            default:
                cout << "Invalid option! Try again." << endl;
                break;
            }

        } while (isNotFinished);

    }

    return 0;

}