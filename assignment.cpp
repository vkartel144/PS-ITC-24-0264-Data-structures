
#include <iostream>
using namespace std;

int main() {
    int marks[5] = {75, 80, 65, 90, 70};
    int total = 0;
    int highest = marks[0];
    int lowest = marks[0];

    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1
             << " mark: " << marks[i] << endl;

        total += marks[i];

        if (marks[i] > highest) {
            highest = marks[i];
        }

        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    double average = total / 5.0;

    cout << "\nTotal marks: " << total << endl;
    cout << "Average mark: " << average << endl;
    cout << "Highest mark: " << highest << endl;
    cout << "Lowest mark: " << lowest << endl;

    return 0;
}
