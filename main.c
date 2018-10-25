#include "vetor.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct{
  Ponto *pontos;
  uint qtd;
} Vetor10Pontos;

int adicionar(Vetor10Pontos* v, Ponto a){

  Ponto *temp = (Ponto*)realloc(v->pontos, (v->qtd+1)*sizeof(Ponto));
  if(temp!=NULL){
    v->pontos = temp;
    v->pontos[v->qtd] = a;
    v->qtd++;
    return 1;
  }
  return 0;
}
int main(int argc, char const *argv[]) {

  /*Vetor v = {0, NULL};
  Ponto a = {10, 20};
  Ponto b = {50, 30};
  if(Vetor_add(&v, a)){
    puts("ok para a");
  }
  if(Vetor_add(&v, b)){
    puts("ok para b");
  }
  Vetor_print(&v);*/

  Vetor10Pontos v;
  v.qtd = 0;
  v.pontos = NULL;
  Ponto *temp;
  Ponto a;
  uint i, k, op;
  while(1){
    puts("1-> Adicionar\n2->Imprimir\n0->Sair\n Sua op: ");
    scanf("%u", &op);
    switch (op) {
      case 1:
        puts("Entre com o ponto(x,y): ");
        scanf("%u %u", &(a.x),&(a.y));
        if(adicionar(&v, a))
          puts("Adicionado com sucesso!");
        else
          puts("Falta de memória!"); break;
      case 2: for(i=0; i< v.qtd; i++){
        printf("\n[%u] = (x=%u, y=%u), ", i, v.pontos[i].x, v.pontos[i].y);
      } putchar('\n'); break;
      default: return(0);
    }
  }


  return 0;
}
