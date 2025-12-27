#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    int totalGrades = sizeof(grades) / sizeof(grades[0]);

    cout << "Press Enter 3 times to reveal your future.";

    for (int i = 0; i < 3; i++) {
        cin.get();
    }

    srand(time(0));
    int randomIndex = rand() % totalGrades;

    cout << "You will get " << grades[randomIndex] << " in this 261102.";

    return 0;
}


