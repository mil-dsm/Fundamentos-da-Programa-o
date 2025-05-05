//Contexto
Um jogo de concentração muito antigo consiste em fazer contagem simultânea entre dois números. O primeiro número cresce, enquanto o segundo número diminui, até que ambos troquem de posição.
Por exemplo, se os números iniciais forem 1 e 10, a sequência seria:

1 10 2 9 3 8 4 7 5 6 6 5 7 4 8 3 9 2 10 1
Esse padrão força o jogador a manter a concentração e lembrar-se das mudanças em ambas as direçõe

Dados dois número A e B, com A sempre menor que *B, gere a sequencia que o jogador deve realizar.

Entrada
Dois números inteiros A e B, sendo A menor que B.
Saída
A sequência completa conforme a regra do jogo, apresentada entre colchetes, separada por espaços.

#include <stdio.h>

int main(){
    int n1, n2, i1, i2;
    scanf("%d%d", &n1, &n2);
    printf("[ ");
    for(i1=n1, i2=n2; i1<=n2, i2>=n1; i1++, i2--){
        printf("%d %d ", i1, i2);
    }
    printf("]\n");
}