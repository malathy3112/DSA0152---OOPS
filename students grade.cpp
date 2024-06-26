#include <iostream>
#include <string>
using namespace std;

string determinePassFail(char grade) {
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'E') {
        return "Pass";
    } else {
        return "Fail";
    }
}

int main() {
    char grade;

    cout << "Enter grade (A, B, C, D, E): ";
    cin >> grade;

    grade = toupper(grade);

    string passFail = determinePassFail(grade);

    if (passFail == "Pass") {
        cout << "Destination: Pass" << endl;
    } else {
        cout << "Destination: Fail" << endl;
    }

    return 0;
}
