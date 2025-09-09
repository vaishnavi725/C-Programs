#include <stdio.h>

int main() {
    int number, digit;
    int evenCount = 0, oddCount = 0, zeroCount = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number == 0) {  
        zeroCount = 1;
    }

    while(number != 0) {
        digit = number % 10;   
        if(digit == 0) {
            zeroCount++;
        }
        else if(digit % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
        number = number / 10;   
    }

    printf("Even digits: %d\n", evenCount);
    printf("Odd digits: %d\n", oddCount);
    printf("Zero digits: %d\n", zeroCount);

    return 0;
}
