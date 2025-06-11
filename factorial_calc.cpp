#include <iostream>
using namespace std;

//finding factorial using loop!
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num1;
    cout << "\nEnter a number to find factorial: ";
    cin >> num1;
    cout << "Factorial of " << num1 << " is: " << factorial(num1) << endl;
    return 0;
}
