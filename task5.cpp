#include <iostream>
using namespace std;

int main() {
    float item1 = 12.95;
    float item2 = 24.95;
    float item3 = 6.95;
    float item4 = 14.95;
    float item5 = 3.95;

    float subtotal;
    float tax;
    float total;

    subtotal = item1 + item2 + item3 + item4 + item5;
    tax = subtotal * 0.06;
    total = subtotal + tax;

    cout << "Item 1 = " << item1 << endl;
    cout << "Item 2 = " << item2 << endl;
    cout << "Item 3 = " << item3 << endl;
    cout << "Item 4 = " << item4 << endl;
    cout << "Item 5 = " << item5 << endl;

    cout << "Subtotal = " << subtotal << endl;
    cout << "Tax = " << tax << endl;
    cout << "Total = " << total << endl;

    return 0;
}
