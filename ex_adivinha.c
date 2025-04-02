#include <stdio.h>

int main() {
    int numero; 
    int tentativas = 3;
    
    printf("Tente adivinhar o número.");
    
    do {
        printf("\nDigite um número: ");
        scanf("%d", &numero);
        
        if (numero == 7) {
            printf("Você ganhou!\n");
            return 0;
        } else {
            tentativas = tentativas - 1;
            if (tentativas > 0) {
                printf("Número errado. Tentativas restantes: %d\n", tentativas);
            }
        }
    } while (tentativas > 0);
    
    printf("Fim de jogo!\n");
    return 0;
}

