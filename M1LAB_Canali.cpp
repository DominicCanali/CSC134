/*
Csc 134
M1LAB - Apple Sales
 D Canali
 1/22/24
 */
#include <iostream>
using namespace std;

int main() {
    //apple sales program
    // Set up variables
    string name = "Dominic Canali";
    int num_apples = 100;
    double price_per_apple = 0.25;
// calculate price for all of the apples
double total_price = num_apples * price_per_apple;
// to do
// print the output
cout << "Welcome to the " << name << " Apple farm." << endl; // or "\n"
cout << "We have " << num_apples << " apples." << endl;
cout << "Each one costs $" << price_per_apple << endl;
cout << "for a total cost of $" << total_price << endl;
cout << endl;
return 0;
}