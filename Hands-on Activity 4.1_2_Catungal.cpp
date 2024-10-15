#include <iostream>
using namespace std;

int main()
{
    float physics, chemistry, biology, mathematics, computer;

    cout << "Please enter the grade in Physics: ";
    cin >> physics;
    cout << "Please enter the grade in Chemistry: ";
    cin >> chemistry;
    cout << "Please enter the grade in Biology: ";
    cin >> biology;
    cout << "Please enter the grade in Mathematics: ";
    cin >> mathematics;
    cout << "Please enter the grade in Computer: ";
    cin >> computer;

    float percentage = (physics + chemistry + biology + mathematics + computer) / 5.0;

    cout << "Physics grade: " << physics << endl;
    cout << "Chemistry grade: " << chemistry << endl;
    cout << "Biology grade: " << biology << endl;
    cout << "Mathematics grade: " << mathematics << endl;
    cout << "Computer grade: " << computer << endl;

    cout << "You're average is: " << percentage << "%" << endl;

    char grade;
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }
    cout << "Grade Level: " << grade << endl;

    return 0;
}
