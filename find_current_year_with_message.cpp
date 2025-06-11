#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// Function to show welcome message with current year!
void welcomeUser(const string& name) {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int year = 1900 + ltm->tm_year;

    cout << "Welcome, " << name << "! The current year is " << year << ".\n";
}

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    welcomeUser(name);

    return 0;
}
