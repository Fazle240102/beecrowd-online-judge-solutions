#include <stdio.h>
int main()
{

    double i, j;
    double sum = 0;
    for (i = 1, j = 1; i <= 39; i += 2, j *= 2)

    {
        sum += (i / j);
    }
    printf("%.2lf\n", sum);

    return 0;
}
