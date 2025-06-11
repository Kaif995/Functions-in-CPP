#include <iostream>
using namespace std;

//cube of a number
int cube(int number) {
    return number * number * number;
}
int main() {
    int num1;
    cout << "\nEnter a number to find its cube: ";
    cin >> num1;
    cout << "Cube of " << num1 << " is: " << cube(num1) << endl;

    return 0;
}
