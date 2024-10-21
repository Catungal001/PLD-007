#include <iostream>

const int RESPONSE_SIZE = 40;

int main() {
    int responses[RESPONSE_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
                                      1, 6, 3, 8, 6, 10, 3, 8, 
                                      2, 7, 6, 5, 7, 6, 8, 6, 
                                      7, 5, 6, 6, 5, 6, 7, 5, 
                                      6, 4, 8, 6, 8, 10 };

    int count[11] = { 0 }; // Count responses from 1 to 10, index 0 will be unused

    for (int i = 0; i < RESPONSE_SIZE; ++i) {
        if (responses[i] >= 1 && responses[i] <= 10) {
            count[responses[i]]++;
        }
    }

    std::cout << "Response Summary:\n";
    std::cout << "Response    Count\n";
    std::cout << "-------------------\n";

    for (int i = 1; i <= 10; ++i) {
        std::cout << "   " << i << "         " << count[i] << '\n';
    }

    return 0;
}

