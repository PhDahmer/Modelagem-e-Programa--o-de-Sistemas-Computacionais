#include <stdio.h>

void atividade1(){
// Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.
    float base, altura;
    printf("\nEscreva a Base do seu retangulo: ");
        scanf("%f", &base);
        printf("\n");
    printf("Escreva a Altura do seu retangulo: ");
        scanf("%f", &altura);
        printf("\n");
    float area = base*altura;
    printf("A Area deste retangulo eh: %.2f\n", area);
}

void atividade2(){
//Escreva um algoritmo que armazene valores em duas variáveis (A e B), e a seguir (utilizando apenas atribuições entre variáveis) 
//troque os seus conteúdos fazendo com que o valor que está em A passe para B e vice-versa. Ao final, escrever os valores que ficaram armazenados nas variáveis.
}


int main() {
    atividade1();
    return 0;
}


