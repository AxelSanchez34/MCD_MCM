#include <stdio.h>
#include <stdlib.h>

int calcularMCD(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        printf("%d = %d * %d + %d\n", abs(a), abs(a) / abs(b), abs(b), abs(r));
        a = b;
        b = r;
    }
    return abs(a);
}

int calcularMCM(int a, int b) {
    int mcd = calcularMCD(abs(a), abs(b));
    return (abs(a) * abs(b)) / mcd;
}

int main() {
    int a, b;

    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &a, &b);

    int mcd = calcularMCD(abs(a), abs(b));
    int mcm = (abs(a) * abs(b)) / mcd;

    printf("El maximo comun divisor (MCD) de %d y %d es: %d\n", abs(a), abs(b), mcd);
    printf("\nCalculando el minimo comun multiplo (MCM): \n");
    printf("MCM = (%d * %d) / %d\n", abs(a), abs(b), mcd);

    int mcmProceso = (abs(a) * abs(b)) / mcd;
    printf("El minimo comun multiplo (MCM) de %d y %d es: %d\n", abs(a), abs(b), mcmProceso);

    return 0;
}
