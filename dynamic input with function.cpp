#include <iostream>
using namespace std;

double reportCard(string name, int id, double mark1, double mark2, double mark3) {
    double total = mark1 + mark2 + mark3;
    double percentage = (total / 300) * 100; // Ensure correct division
    return percentage;
}

int main() {
    string name;
    int id;
    double a, b, c;

    cout << "Enter Student Name: ";
    cin >> name;	//getline(cin,name) it will solve the problem of spacing in string
    cout << "Enter Student ID: ";
    cin >> id;
    cout << "Enter Student marks1: ";
    cin >> a;
    cout << "Enter Student marks2: ";
    cin >> b;
    cout << "Enter Student marks3: ";
    cin >> c;

    double result = reportCard(name, id, a, b, c);
    cout << "Percentage: " << result << "%" << endl; // Corrected output

    return 0;
}
    
