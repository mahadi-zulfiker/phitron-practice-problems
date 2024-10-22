#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);

    long long absolute_sum = 0;

    for (int i = 0; i < a; i++)
    {
        int num;
        scanf("%d", &num);
        absolute_sum += num;
    }

    printf("%lld\n", llabs(absolute_sum));
}


