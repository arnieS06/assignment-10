#include <iostream>
using namespace std;

// a function that calculates the commission
// based on a chart 
int main() {
    int sales;
    float commission;

    cout << "What were your total sales in USD?: ";
    cin >> sales;

    if (sales <= 10000) {
        commission = 0.1;
        cout << "Your commission for the sales is " << commission * 100 << "%" << endl;
    }
    else if (sales > 10000 && sales < 15000) {
        commission = 0.15;
        cout << "Your commission for the sales is " << commission * 100 << "%" << endl;
    }
    else if (sales > 15000) {
        commission = 0.2;
        cout << "Your commission for the sales is " << commission * 100 << "%" << endl;
    }
    else {
        cout << "Please enter a valid sales number in USD.";
    }

    return 0;
}
