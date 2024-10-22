#include <stdio.h>

int main()
{
    int N, i, found = 0;

    // Input the number N
    scanf("%d", &N);

    // Loop through numbers from 2 to N and check for even numbers
    for (i = 2; i <= N; i += 2)
    {
        printf("%d\n", i);
        found = 1; // Mark that we've found at least one even number
    }

    // If no even numbers were found, print -1
    if (found == 0)
    {
        printf("-1\n");
    }

    return 0;
}
