#include <stdio.h>

int main () {
    char estado[10]; 
    char cod_carta[35]; //Identificação de cada estado Pela letra do estado seguido de um número;
    char cidade[40]; 
    int populacao;
    int pont_turisticos; //Quantidade dos pontos turísticos
    float area; //Área em km²;
    float PIB; 

    printf("Digite a sigla do Estado: ");
    scanf("%s", &estado);

    printf("Digite o codigo da Carta: ");
    scanf("%s", &cod_carta);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &cidade);

    printf("Digite a quantidade da habitantes: ");
    scanf("%d", &populacao);

    printf("Declare a quantidade dos Pontos Turisticos: ");
    scanf("%d", &pont_turisticos);

    printf("Informe a area em km² da cidade: ");
    scanf("%f", &area);

    printf("Informe o PIB: ");
    scanf("%f", &PIB);

    printf("Cidade: %s - Estado: %s - Codigo: %s\n", cidade, estado, cod_carta);
    printf("Com um total de habitantes: %d, Contendo pontos turisticos: %d\n", populacao, pont_turisticos);
    printf("Estimado uma area de: %f, e um PIB de: %f", area, PIB);

    return 0;

}