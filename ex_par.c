#include <stdio.h>

int main(void) {
  int contador = 1;
  int ponto= 0;
  int somax = 0;
 
do {
    printf ("Qual o número?:");
    scanf ("%d", &ponto);
    
    if (ponto%2 == 0) {
        somax += ponto;
} else {
 break;
}

} while (ponto % 2 ==0);

printf("A soma dos pares: %d", somax);
}