// converts kroner, pounds, and yen to USD.

#include </home/parkercmcleod/Documents/programming/cpp/include/std_lib_facilities.h>

// converts inputted amount and type into USD
int main()
{
    char currency_type;
    double amount;
    cout << "example: 2400y, 77p, 200k\nEnter the amount and type of currency: ";
    cin >> amount >> currency_type;
    switch(currency_type) 
    {
        case 'y':
            amount = amount / 138.82;
            break;
        case 'p':
            amount = amount / .96;
            break;
        case 'k':
            amount = amount / 9.93;
            break;
        default:
            cout << "ERROR, INCORRECT INPUT";
            exit(-1);
    }
    cout << "\n is equal to " << amount << " USD.\n";
    
}
