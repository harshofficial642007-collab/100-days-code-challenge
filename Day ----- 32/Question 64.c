// Q64: Find the digit that occurs the most times in an integer number


#include <stdio.h>

int main() {
    int num, digit, count[10] = {0};

    // Read the number
    scanf("%d", &num);

    // Count each digit in the number
    while(num > 0) {
        digit = num % 10;    // Get last digit
        count[digit]++;      // Increase its count
        num = num / 10;      // Remove last digit
    }

    // Find digit with maximum count
    int max = 0, result = 0;
    for(int i=0; i<10; i++) {
        if(count[i] > max) { // New highest count found
            max = count[i];
            result = i;
        }
    }

    printf("%d\n", result);
    return 0;
}
