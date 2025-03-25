#include <stdio.h>

int main()
{
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

    float descidadePolulacional = populacao / pib;
    float descidadePolulacional2 = populacao2 / pib2;

    float pibPercapita = pib / area;
    float pibPercapita2 = pib2 / area2;

    printf("#####################################################\n");

    int valor;

    printf("ESCOLHA UMA DAS OPCOES ABAIXO!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Num de Pontos Turisticos\n");
    printf("5. desenguadade demografica\n");
    printf("DIGITE SUA OPCAO:\n");
    scanf("%d", &valor);

    printf("#####################################################\n");
   
    

    switch (valor)
    {
    case 1:
        if (populacao > populacao2)
        {
            printf("A CARTA :%s GANHOU!\n", codigo);
            printf("O Numero populaciona e:%d\n", populacao);
        }
        else
        {
            printf("A CARTA :%s GANHOU!\n", codigo2);
            printf("O Numero populaciona e:%d\n", populacao2);
        }

        break;

    case 2:
        if (area > area2)
        {
            printf("A CARTA :%s GANHOU!\n", codigo);
            printf("A Area e de : %0.2f  KM²", area);
        }
        else
        {
            printf("A CARTA :%s GANHOU!\n", codigo2);
            printf("A Area e de : %0.2f KM²", area2);
        }

        break;

    case 3:
        if (pib > pib2)
        {
            printf("A CARTA :%s GANHOU!\n", codigo);
            printf("O PIB e de:%0.2f ", pib);
        }
        else
        {
            printf("A CARTA :%s GANHOU!\n", codigo2);
            printf("O PIB e de:%0.2f", pib2);
        }

        break;

    case 4:
        if (pontosTuristicos > pontosTuristicos2)
        {
            printf("A CARTA :%s GANHOU!\n", codigo);
            printf("Com %d Pontos turisticos\n", pontosTuristicos);
        }
        else
        {
            printf("A CARTA :%s GANHOU!\n", codigo2);
            printf("Com %d Pontos turisticos\n", pontosTuristicos2);
        }

        break;

    case 5:
        if (descidadePolulacional > descidadePolulacional2)
        {
            printf("A CARTA :%s GANHOU!\n", codigo);
            printf("A dencidade Populacional e:%0.2f\n ", descidadePolulacional);
        }
        else
        {
            printf("A CARTA :%s GANHOU!\n", codigo2);
            printf("A dencidade Populacional e:%0.2f\n ", descidadePolulacional2);
        }

        break;

    default:
        break;
    }

    return 0;
}
