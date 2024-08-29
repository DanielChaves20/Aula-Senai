#include <stdio.h> // Inclusão da biblioteca de entrada e saida
#include <stdbool.h> // Inclusão da biblioteca de teste lógico

int main () //Função principal para iniciar o sistema
{
    char nome[20];
    int idade, anoDeNascimento;
    float altura;
    bool maiorDeIdade;
    
    // Solicitação do nome
    printf("Digite seu nome: "); //Irá solicitar na tela de usuario
    scanf("%s", nome); // Irá ler a entrada de dado
    
    // Solicitação do ano de nascimento
    printf("Digite seu ano de nascimento: "); //Irá solicitar na tela de usuario
    scanf("%d", &anoDeNascimento); // Irá ler a entrada de dado
    
    // Calculo
    idade = 2024 - anoDeNascimento;
    
    // Verificando a maiorDeIdade
        if (idade >= 18) {
    maiorDeIdade = true;
        
    } else {
    maiorDeIdade = false;
        
    }
    
    // Solicitação de altura
    printf("Digite sua altura: "); //Irá solicitar na tela de usuario
    scanf("%f", &altura); // Irá ler a entrada de dado
    
    // Apresentação do resultado
    
    printf("%s tem %d anos de idade", nome, idade);
    
    if (maiorDeIdade) {
        printf ("é maior de idade");
    } else {
        printf ("é menor de idade");
    }
    
    printf("e mede %.2f de altura.", altura);
    
    return 0;
    
    }