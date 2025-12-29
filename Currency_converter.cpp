#include <iostream>
using namespace std;

// Function to convert currency
void currencyConverter() {
    int choice;
    double amount, result;

    // Exchange rates (approx)
    const double USD_TO_INR = 83.0;
    const double EUR_TO_INR = 90.0;
    const double GBP_TO_INR = 105.0;

    cout << "\n--- Currency Converter ---\n";
    cout << "1. INR to USD\n";
    cout << "2. INR to EUR\n";
    cout << "3. INR to GBP\n";
    cout << "4. USD to INR\n";
    cout << "5. EUR to INR\n";
    cout << "6. GBP to INR\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter amount: ";
    cin >> amount;

    switch (choice) {
        case 1:
            result = amount / USD_TO_INR;
            cout << "USD = " << result;
            break;

        case 2:
            result = amount / EUR_TO_INR;
            cout << "EUR = " << result;
            break;

        case 3:
            result = amount / GBP_TO_INR;
            cout << "GBP = " << result;
            break;

        case 4:
            result = amount * USD_TO_INR;
            cout << "INR = " << result;
            break;

        case 5:
            result = amount * EUR_TO_INR;
            cout << "INR = " << result;
            break;

        case 6:
            result = amount * GBP_TO_INR;
            cout << "INR = " << result;
            break;

        default:
            cout << "Invalid choice!";
    }
}

int main() {
    currencyConverter();
    return 0;
}
