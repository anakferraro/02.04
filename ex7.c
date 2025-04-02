#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    printf("Digite 4 números inteiros de 0 a 10:\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

   for(int i = 0; i < num1; i++) {
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < num2; i++) {
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < num3; i++) {
        printf("*");
    }
    printf("\n");
    for(int i = 0; i < num4; i++) {
        printf("*");
    }
    printf("\n");
return 0;
}