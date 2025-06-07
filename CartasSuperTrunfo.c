#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigocidade[10]; char nome[50]; int populacao; float area; float PIB; int numeroPT;
    printf("Vamos cadastrar a primeira carta\n");
    
    printf("Digite codigo da cidade:\n");
    scanf("%s",codigocidade);
    
    printf("Digite nome:\n");
    scanf("%s",nome);

    printf("Digite população:\n");
    scanf("%d",&populacao);

    printf("Digite area:\n");
    scanf("%f",&area);

    printf("Digite PIB:\n");
    scanf("%f",&PIB);

    printf("Digite numero de pontos turisticos:\n");
    scanf("%d",&numeroPT);

    printf("codigo da cidade: %s\n",codigocidade);
    printf("nome: %s\n",nome);
    printf("populacao %d\n", populacao);
    printf("area: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("numero de pontos turisticos: %d\n",numeroPT);

    //CARTA 2

    char codigocidade2[10]; char nome2[50]; int populacao2; float area2; float PIB2; int numeroPT2;
    printf("Vamos cadastrar a SEGUNDA carta\n");
    
    printf("Digite codigo da cidade:\n");
    scanf("%s",codigocidade2);
    
    printf("Digite nome:\n");
    scanf("%s",nome2);

    printf("Digite população:\n");
    scanf("%d",&populacao2);

    printf("Digite area:\n");
    scanf("%f",&area2);

    printf("Digite PIB:\n");
    scanf("%f",&PIB2);

    printf("Digite numero de pontos turisticos:\n");
    scanf("%d",&numeroPT2);

    printf("codigo da cidade: %s\n",codigocidade2);
    printf("nome: %s\n",nome2);
    printf("populacao %d\n", populacao2);
    printf("area: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("numero de pontos turisticos: %d\n",numeroPT2);
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

