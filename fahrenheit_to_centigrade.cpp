#include <iostream>
using namespace std;


// Function to convert Fahrenheit to Centigrade (Celsius)
double fahrenheitToCentigrade(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}


int main() {
    double fahrenheit;


    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;


    double centigrade = fahrenheitToCentigrade(fahrenheit);


    cout << fahrenheit << " Fahrenheit is " << centigrade << " Centigrade." << endl;


    return 0;
}
