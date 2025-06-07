#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo da cidade, char nome, int população, float area, float PIB, int numero de pontos turisticos;
    printf("Vamos cadastrar a primeira carta");
    
    printf("Digite codigo da cidade:"\n);
    scanf("%s",&codigo da cidade);
    
    printf("Digite nome:\n");
    scanf("%s",&nome);

    printf("Digite população:\n");
    scanf("%d",&população);

    printf("Digite area:\n");
    scanf("%f",&area)

    printf("Digite PIB:\n");
    scanf("%f",&PIB);

    printf("Digite numero de pontos turisticos:\n");
    scanf("%d",&numero de pontos turisticos);

    printf("codigo da cidade: %s\n",codigo da cidade);
    printf("nome: %s\n",nome);
    printf("populacao %s\n", populacao);
    printf("area: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("numero de pontos turisticos: %d\n",numero de pontos turisticos);
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
