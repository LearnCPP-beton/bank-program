#include <iostream>
#include "bank.h"
using namespace std;

void start() {
    double balance = 0;
    int choice = 0;
    do {
        cout << "Choose option (1-3)" << endl;
        cout << "1. Show your balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Widthraw" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= widthraw(balance);
                showBalance(balance);
                break;
            case 4:
                cout << "Thanks for visiting" << endl;
                break;
            default:
                cout << "Invalid option" << endl;
                break;
        }
    }while (choice != 4);
}

void showBalance(double balance){
    cout << "Your balance is: " << balance << endl;
}

double deposit(){
    double depositMoney;

    cout << "How much do you want do deposit?" << endl;
    cin >> depositMoney;
    if (depositMoney <= 0){
        cout << "You cant deposit negative" << endl;
    }else{
        return depositMoney;
    }

    return 0;
}

double widthraw(double balance) {
    double widthrawMoney;

    cout << "How much do you want do widthraw?" << endl;
    cin >> widthrawMoney;

    if (widthrawMoney > balance) {
        cout << "Dont enough money!" << endl;

        cout << "Your balance now: " << balance << endl;
    } else if (widthrawMoney <= 0) {
        cout << "You cant widthraw negative" << endl;
    } else {
        return widthrawMoney;
    }

        return 0;
}