#include "vetor.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {
  Vetor v = {0, NULL};
  Ponto a = {10, 20};
  Ponto b = {50, 30};
  if(Vetor_add(&v, a)){
    puts("ok para a");
  }
  if(Vetor_add(&v, b)){
    puts("ok para b");
  }
  Vetor_print(&v);
  return 0;
}
