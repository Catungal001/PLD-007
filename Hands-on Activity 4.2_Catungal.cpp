#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int values[size] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};

    cout << "Element Value Histogram\n";
    for (int i = 0; i < size; i++) {
        cout << "  " << i << "    " << values[i] << "    ";
        for (int j = 0; j < values[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
