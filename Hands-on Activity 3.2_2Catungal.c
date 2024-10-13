#include <stdio.h>
#include <math.h>

int main() {
    float principal = 1000.00;  // initial investment
    float rate = 0.05;  // annual interest rate (5%)
    int years = 10;  // number of years

    for (int i = 1; i <= years; i++) {
        float amount = principal * pow(1 + rate, i);
        printf("Year %d: Amount = $%.2f\n", i, amount);
    }
    return 0;
}