// Comment
/*
CSC 134
M2T2 - 
D Canali
1/29/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "M2T2" << endl;
    //set up variables
string name;
int num_apples;
double price_per_apple;
double total_pre_tax;
double tax_percent = 0.08;
double tax_amount;
double total_price;
string email;
    //Ask user for name
    cout << "What is your name? ";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;
    cout << "Please enter your email adress: ";
    cin >> email;
    // How many apples?
    cout << "How many apples would you like to purchase? ";
    cin >> num_apples;
    // Ask price per apple
    cout << "How much are they each? ";
    cin >> price_per_apple;
    // Calcultate the total price
    total_pre_tax = num_apples * price_per_apple;
    tax_amount = total_pre_tax * tax_percent;
    total_price = total_pre_tax + tax_amount;
    //Print the output
    cout << "Your total before tax is: " <<  "$" << total_pre_tax;
    cout << endl;
    cout << "--------------------------" << endl;
    cout << "Tax (8%)" << "\t" << "$" << tax_amount << endl;
    cout << "--------------------------" << endl;
    cout << "Your total after tax is: " << "$" << total_price << endl;
    cout << "--------------------------" << endl;
    cout << "Thank you for shopping with Amazon!" << endl;
    cout << "Your reciept will be emailed shortly to:   " << endl;
    cout << email << endl;
    return 0;
}
