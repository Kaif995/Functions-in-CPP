#include <iostream>
using namespace std;

//finding largest of 3 numbers!
int largest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
int main() {
    int num1, num2, num3;
    cout << "\nEnter three numbers:\n";
    cin >> num1 >> num2 >> num3;
    cout << "Largest number is: " << largest(num1, num2, num3) << endl;
    return 0;
}
