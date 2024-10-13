#include <stdio.h>

int main() 
{
    int sum = 0;
    for (int i = 2; i <= 100; i += 2) 
    {
        sum += i;
    }
    printf("The sum of even integers from 2 to 100 is: %d\n", sum);
    return 0;
}