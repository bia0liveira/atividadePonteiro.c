#ifndef _PONTO_H
#define _PONTO_H

/* TAD: Ponto (x,y) */

/* Tipo exportado */
typedef struct ponto Ponto;

/* Fun��es exportadas */

// Aloca e retorna um ponto com coordenadas (x,y)
Ponto *criarPonto(double x, double y);

// Libera a mem�ria de um ponto previamente criado.
void liberarPonto(Ponto *p);

// Devolve os valores das coordenadas de um ponto
void acessarPonto(Ponto *p, double *x, double *y);

// Atribui novos valores �s coordenadas de um ponto
void atribuirPonto(Ponto *p, double x, double y);

// Retorna a dist�ncia entre dois pontos
double distanciaPonto(Ponto *p1, Ponto *p2);

#endif
