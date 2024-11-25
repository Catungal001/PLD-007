#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    char op;

    cout << "Enter two numbers and an operator: ";
    cin >> a >> b >> op;

    switch (op) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << a / b << endl;
            } else {
                cout << "Division by zero error" << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;

}
