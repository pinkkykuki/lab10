#include <iostream>
using namespace std;

int main() {
    int count[5] = {0}; // Declare array for counting grades A, B, C, D, F
    int totalstu = 0;   // Total number of students
    char grade;         // Grade input variable

    // Add a new line after the initial prompt for better formatting
    cout << "Please input grade of each student (A-F) or input 0 to exit.\n";

    do {
        cout << "Student [" << totalstu + 1 << "]: ";
        cin >> grade;

        if (grade == '0') { 
            break; // Terminate the loop when grade = '0'
        }

        if (grade == 'A') {
            count[0]++;
            totalstu++;
        } else if (grade == 'B') {
            count[1]++;
            totalstu++;
        } else if (grade == 'C') {
            count[2]++;
            totalstu++;
        } else if (grade == 'D') {
            count[3]++;
            totalstu++;
        } else if (grade == 'F') {
            count[4]++;
            totalstu++;
        } else {
            cout << "Wrong input. Please input again.\n"; // Add new line for clarity
        }
    } while (true);

    // Display results
    cout << "In total " << totalstu << " students.\n";
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << "\n";

    return 0;
}
