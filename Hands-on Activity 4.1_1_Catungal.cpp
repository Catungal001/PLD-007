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

    cout << "You're average is: " << percentage << endl;

    switch (static_cast<int>(percentage / 10))
    {
    case 9:
    case 10:
        cout << "Grade Level: A";
        break;
    case 8:
        cout << "Grade Level: B";
        break;
    case 7:
        cout << "Grade Level: C";
        break;
    case 6:
        cout << "Grade Level: D";
        break;
    case 5:
        cout << "Grade Level: E";
        break;
    default:
        cout << "Grade Level: F";
    }
    return 0;
}
