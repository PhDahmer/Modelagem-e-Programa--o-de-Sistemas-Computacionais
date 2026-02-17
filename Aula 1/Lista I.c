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
    int a, b;
    printf("\nEscreva o valor de A: ");
        scanf("%d", &a);
        printf("\n");
    printf("Escreva o valor de B: ");
        scanf("%d", &b);
        printf("\n");
    printf("O Valor de A eh: %d\nE o Valor de B eh: %d\n", a,b);
    printf("\nRealizando a troca...\n");
    int temp = a;
    a = b;
    b = temp;
    printf("\nAgora o Valor de A eh: %d\n E o Valor de B eh: %d\n", a,b);
}

void atividade3(){
//Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius
    float C, F, K;
    printf("\nDigite a temperatura em Fahrenheit: ");
        scanf("%f", &F);
    C = 5*((F-32)/9);
    K = (F-32)*5/9+273;
    printf("\nA temperatura em Celsius eh: %.2fºC", C);
    printf("\nA temperatura em Kelvin eh: %.2fK", K);
} 

void atividade4(){
//Escreva um algoritmo que converta metros para centímetros.
    float cm, m;
    printf("\nDigite a medida em Metros: ");
        scanf("%f", &m);
        cm = m*100;
    printf("A medida em cm eh: %.2f cm", cm);
}

void atividade5(){


}

void atividade6(){

    
}

void atividade7(){

    
}

void atividade8(){

    
}

void atividade9(){

    
}

void atividade10(){

    
}

void atividade11(){
// Faça um algoritmo que mostre os 10 primeiros números da sequencia de Fibonacci iniciando com o número 1
}

int main() {
    atividade5();
    return 0;
}


