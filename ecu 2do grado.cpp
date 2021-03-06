#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Ingrese coeficientes a, b y c de la ecuaci?n: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
        printf("El coeficiente a no puede ser igual a cero");
    else {
        double discriminante = pow(b, 2) - 4 * a*c;
        if (discriminante >= 0)
            if (discriminante == 0) {
                double x = -b / (2 * a);
                printf("La ra?z ?nica es %.3lf\n", x);
            } else {
                double x1, x2;
                x1 = (-b + sqrt(discriminante)) / (2 * a);
                x2 = (-b - sqrt(discriminante)) / (2 * a);
                printf("La ra?z real x1 es %.3lf\n", x1);
                printf("La ra?z real x2 es %.3lf\n", x2);
            }
        else {
            double parteReal, parteImaginaria;
            discriminante = fabs(discriminante);
            parteReal = -b / (2 * a);
            parteImaginaria = sqrt(discriminante) / (2 * a);
            printf("La ra?z compleja x1 es %.3lf + %.3lfi\n", parteReal, parteImaginaria);
            printf("La ra?z compleja x2 es %.3lf - %.3lfi\n", parteReal, parteImaginaria);
        }
    }
    return 0;
}
