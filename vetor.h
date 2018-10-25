#ifndef VETOR_H
#define VETOR_H
typedef unsigned int uint;

typedef struct{uint x, y;} Ponto;
typedef struct{uint qtde; Ponto *vetor;} Vetor;

int Vetor_add(Vetor*, Ponto);
int Vetor_rm(Vetor*, Ponto);
int Vetor_search(Vetor*, Ponto);
void Vetor_print(Vetor*);

#endif
