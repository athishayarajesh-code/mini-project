#include <iostream>
using namespace std;
int main() {
    cout  << "==============================" << endl;
    cout << " STUDENT  MARKS ANALYZER" << endl;
    cout << "==============================" << endl;

    int marks[40], n, i;
    int total = 0, highest, lowest;
    int pass = 0, fail = 0;
    float average;

    cout << "Enter number of students: ";
    cin >> n;

    if (n < 1 || n > 40) {
        cout << "Invalid number!";
        return 0;
    }
    // Input marks.
    for (int i = 0; i < n; i++) {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];

        total += marks[i];

        if (marks[i] >= 35)
            pass++;
        else
            fail++;
    }

    highest = marks[0];
    lowest = marks[0];

    // Find highest and lowest.
    for (i = 1; i < n; i++) {
        if (marks[i] > highest)
            highest = marks[i];
        if (marks[i] < lowest)
            lowest = marks[i];
    }

    average = static_cast<float>(total) / n;

    // Display results while still inside main.
    cout << "\nTotal = " << total;
    cout << "\nAverage = " << average;
    cout << "\nHighest = " << highest;
    cout << "\nLowest = " << lowest;
    cout << "\nPasses = " << pass;
    cout << "\nFailed = " << fail;
    return 0;
}
