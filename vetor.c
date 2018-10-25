#include "vetor.h"
#include<stdio.h>
#include<stdlib.h>

int Vetor_add(Vetor* v, Ponto p){
  if(v!=NULL){
    v->vetor = (Ponto*) realloc(v->vetor, (v->qtde+1) * sizeof(Ponto));
    if(v->vetor){
      v->vetor[v->qtde] = p;
      v->qtde++;
      return 1;
    }
  }
  return 0;
}

void Vetor_print(Vetor* v){
  uint i;
  if(v!=NULL){
    for(i = 0; i<v->qtde; i++)
      printf("vetor[%u] = (%u, %u), ", i, v->vetor[i].x, v->vetor[i].y);
    putchar('\n');
  }
}
