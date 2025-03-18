#include <stdio.h>
 
int main() {
   // variaveis armazenamento de dados da primeira carta
    int populacao, pontosTuristicos;
    float pib, area;
    char estado[50], codigo[50], cidade[50];

    // variaveis, armazenamento de dados da segunda carta
    int populacao2, pontosTuristicos2;
    float pib2, area2;
    char estado2[50], codigo2[50], cidade2[50];



    printf("DIGITE AS INFORMAÇÕES DA PRIMEIRA CARTA!\r\n");

    printf("Cidade: ");
    scanf("%s", &cidade);
    
    printf("Estado: ");
    scanf("%s", &estado);

    printf("area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Codigo: ");
    scanf("%s", &codigo);

    printf("População: ");
    scanf("%d", &populacao);

    printf("pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);



    printf("DIGITE AS INFORMAÇÕES DA SEGUNDA CARTA!\r\n");

    printf("Cidade: ");
    scanf("%s", &cidade2);
    
    printf("Estado: ");
    scanf("%s", &estado2);

    printf("area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Codigo: ");
    scanf("%s", &codigo2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("#####################################################\n");

    printf("CARTA 1\r\n");
    printf("Estado : %s\n", estado);
    printf("Cidade : %s\n", cidade);
    printf("Aréa : %.2f km²\n", area);
    printf("PIB : %.2f bilhoes de reais\n ", pib);
    printf("Codigo : %s\n", codigo);
    printf("População : %d\n", populacao);
    printf("Pontos Turisticos : %d\r\n", pontosTuristicos);

    printf("#####################################################\n");

    printf("CARTA 2\r\n");
    printf("Estado : %s\n", estado2);
    printf("Cidade : %s\n", cidade2);
    printf("Aréa : %.2f km²\n", area2);
    printf("PIB : %.2f bilhoes de reais\n ", pib2);
    printf("Codigo : %s\n", codigo2);
    printf("População : %d\n", populacao2);
    printf("Pontos Turisticos : %d\n", pontosTuristicos2);

    return 0;
}


