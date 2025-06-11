#include <iostream>
using namespace std;

//finding number is prime or not using loop!
void checkPrime(int num) {
    if (num <= 1) {
        cout << num << " is not a prime number.\n";
        return;
    }

    bool isPrime = true;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << num << " is a prime number.\n";
    else
        cout << num << " is not a prime number.\n";
}
int main() {
    int num;
    cout << "\nEnter a number to check if it's prime: ";
    cin >> num;
    checkPrime(num);

    return 0;
}
