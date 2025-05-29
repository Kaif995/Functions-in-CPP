#include <iostream>
#include <cmath> // For pow and fabs
using namespace std;

// Function to evaluate the polynomial
double evaluatePolynomial(double x) {
    return 3 * pow(x, 4) + 4 * pow(x, 3) + pow(x, 2) - 7 * x + 9;
}

int main() {
    double num;
    cout << "Enter any number: ";
    cin >> num;

    double res = evaluatePolynomial(num);
    cout << "Polynomial value at " << num << " is: " << res << endl;

    return 0;
}

