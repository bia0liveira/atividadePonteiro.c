#include <stdio.h>
#include "Ponto.h"

int main()
{
    Ponto *p = criarPonto(2.5, 3.5);
    Ponto *q = criarPonto(3.0, 2.0);

    double d = distanciaPonto(p, q);

    printf("Distancia: %lf \n", d);

    liberarPonto(p);
    liberarPonto(q);
    return 0;
}