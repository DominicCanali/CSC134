// Comment
/*
CSC 134
M2LAB1 - Hello World
D Canali
1/31/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    cout << "_Part 1 - volume of a rectangular prism" << endl;
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;
    cout << fixed << setprecision(2);
    // constants don't change during the run
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    cout << "Please enter the length of the rectangle: " << endl;
    cin >> length;
    cout << "Please enter the width of the rectangle: " << endl;
    cin >> width;
    cout << "Please enter the height of the rectangle: " << endl;
    cin >> height;
    volume = length * width * height;
    cout << "The volume of the rectanglular prism is " << volume << endl;

    //part 2: Calculate the cost of the box
    //Calc price to make it
    //Calc price its sold at
    // calc. profit
    cout << "Part 2 - Calculate the cost of the box. " << endl;
    cost = COST_PER_CUBIC_FOOT * volume;
    charge = CHARGE_PER_CUBIC_FOOT * volume;
    profit = charge - cost;
    cout << "The price to make the box is $" << cost << endl;
    cout << "--------------------------------------" << endl; 
    cout << "The sales price of the box is $" << charge << endl;
    cout << "--------------------------------------" << endl; 
    cout << "The profit of selling the box is $" << profit << endl;
return 0;
}

