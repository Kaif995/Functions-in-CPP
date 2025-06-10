#include <iostream>
#include <string>
using namespace std;

// Function to get grade and GPA based on marks
void getGradeAndGPA(int marks, string &grade, float &gpa) {
    if (marks >= 96 && marks <= 100) {
        grade = "A+";
        gpa = 4.00;
    } else if (marks >= 90) {
        grade = "A";
        gpa = 3.50;
    } else if (marks >= 80) {
        grade = "B+";
        gpa = 3.00;
    } else if (marks >= 70) {
        grade = "B";
        gpa = 2.75;
    } else if (marks >= 60) {
        grade = "C+";
        gpa = 2.50;
    } else if (marks >= 50) {
        grade = "C";
        gpa = 2.25;
    } else {
        grade = "F";
        gpa = 2.00;
    }
}

int main() {
    string subjects[5] = {"Math", "Physics", "Electronics", "Islamiat", "Computer Programming"};
    int marks[5];
    float totalMarks = 0, totalGPA = 0;
    bool error = false;

    cout << "Enter marks for the following 5 subjects (0-100):\n";

    for (int i = 0; i < 5; ++i) {
        cout << subjects[i] << ": ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Error: Marks must be between 0 and 100.\n";
            error = true;
            break;
        }
    }

    if (!error) {
        cout << "\n---------------- MARKSHEET ----------------\n";
        cout << "Subject\t\tMarks\tGrade\tGPA\n";
        cout << "------------------------------------------\n";

        for (int i = 0; i < 5; ++i) {
            string grade;
            float gpa;
            getGradeAndGPA(marks[i], grade, gpa);
            cout << subjects[i] << "\t" << marks[i] << "\t" << grade << "\t" << gpa << endl;

            totalMarks += marks[i];
            totalGPA += gpa;
        }

        float percentage = (totalMarks / 500) * 100;
        float cgpa = totalGPA / 5;

        cout << "------------------------------------------\n";
        cout << "Total Marks: " << totalMarks << "/500\n";
        cout << "Percentage : " << percentage << "%\n";
        cout << "CGPA       : " << cgpa << endl;
    }

    return 0;
}
