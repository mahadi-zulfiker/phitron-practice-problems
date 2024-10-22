#include <stdio.h>

int main() {
    int N;
    // Read the input number
    scanf("%d", &N);

    // Get the tens and ones digits
    int tens = N / 10;
    int ones = N % 10;

    // Check if one digit is divisible by the other (excluding 0 to avoid division by zero)
    if (ones != 0 && tens % ones == 0) {
        printf("YES\n");
    } else if (tens != 0 && ones % tens == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
