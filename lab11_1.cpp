#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "Press Enter 3 times to reveal your future." << endl;
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int r = rand() % 9;
    string grade;
    if (r == 0) grade = "A";
    else if (r == 1) grade = "B+";
    else if (r == 2) grade = "B";
    else if (r == 3) grade = "C+";
    else if (r == 4) grade = "C";
    else if (r == 5) grade = "D+";
    else if (r == 6) grade = "D";
    else if (r == 7) grade = "F";
    else grade = "W";

    cout << "You will get " << grade << " in this 261102." << endl;

    return 0;
}
