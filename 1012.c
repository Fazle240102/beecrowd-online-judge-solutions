#include <stdio.h>
int main()
{
    double A, B, C;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    printf("TRIANGULO: %.3lf\n", (.5 * A * C));
    printf("CIRCULO: %.3lf\n", (3.14159 * C * C));
    printf("TRAPEZIO: %.3lf\n", ((A + B) / 2) * C);
    printf("QUADRADO: %.3lf\n", B * B);
    printf("RETANGULO: %.3lf\n", A * B);

    return 0;
}