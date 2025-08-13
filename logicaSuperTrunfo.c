#include <stdio.h>

int main() {
    char estadoCarta1, estadoCarta2;
    char codigoCarta1[4], codigoCarta2[4];
    char cidadeCarta1[20], cidadeCarta2[20];
    unsigned int populacaoCarta1, populacaoCarta2;
    unsigned int pontosTuristicosCarta1, pontosTuristicosCarta2;
    unsigned int escolhaJogador;
    float areaCarta1, areaCarta2, pibCarta1, pibCarta2;
    float densidadeCarta1, densidadeCarta2, pibPerCapitaCarta1, pibPerCapitaCarta2;

    // -------- Carta 1 --------
    printf("Informe o estado ('A até H'):\n");
    scanf(" %c", &estadoCarta1);

    printf("Informe o código da carta:\n");
    scanf(" %3s", codigoCarta1);

    printf("Informe o nome da cidade:\n");
    scanf(" %19[^\n]", cidadeCarta1);

    printf("Informe o número de habitantes da cidade:\n");
    scanf("%u", &populacaoCarta1);

    printf("Informe a área da cidade em km²:\n");
    scanf("%f", &areaCarta1);

    printf("Informe o PIB:\n");
    scanf("%f", &pibCarta1);

    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%u", &pontosTuristicosCarta1);

    densidadeCarta1 = (float)populacaoCarta1 / areaCarta1;
    pibPerCapitaCarta1 = pibCarta1 / populacaoCarta1;

    // -------- Carta 2 --------
    printf("Informe o estado ('A até H'):\n");
    scanf(" %c", &estadoCarta2);

    printf("Informe o código da carta:\n");
    scanf(" %3s", codigoCarta2);

    printf("Informe o nome da cidade:\n");
    scanf(" %19[^\n]", cidadeCarta2);

    printf("Informe o número de habitantes da cidade:\n");
    scanf("%u", &populacaoCarta2);

    printf("Informe a área da cidade em km²:\n");
    scanf("%f", &areaCarta2);

    printf("Informe o PIB:\n");
    scanf("%f", &pibCarta2);

    printf("Informe a quantidade de pontos turísticos:\n");
    scanf("%u", &pontosTuristicosCarta2);

    densidadeCarta2 = (float)populacaoCarta2 / areaCarta2;
    pibPerCapitaCarta2 = pibCarta2 / populacaoCarta2;

    printf("Escolha um atributo para comparação:\n");
    printf("1. População.\n");
    printf("2. Area.\n");
    printf("3. PIB.\n");
    printf("4. Pontos Turísticos.\n");
    printf("5. Densidade populacional.\n");;
    printf("6. Pib Per Capita.\n");
    printf("Opção: ");
    scanf("%u", &escolhaJogador);

    switch(escolhaJogador){
        case 1:
            printf("Comparação de cartas: População.\n");
            printf("Carta 01 - %s: %u\n", cidadeCarta1, populacaoCarta1);
            printf("Carta 02 - %s: %u\n", cidadeCarta2, populacaoCarta2);
            if (populacaoCarta1 > populacaoCarta2) {
                printf("Resultado: Carta 01 (%s) venceu!\n", cidadeCarta1);
            } else if (populacaoCarta1 < populacaoCarta2) {
                printf("Resultado: Carta 02 (%s) venceu!\n", cidadeCarta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2:
            printf("Comparação de cartas: Área.\n");
            printf("Carta 01 - %s: %.2f\n", cidadeCarta1, areaCarta1);
            printf("Carta 02 - %s: %.2f\n", cidadeCarta2, areaCarta2);
            if (areaCarta1 > areaCarta2) {
                printf("Resultado: Carta 01 (%s) venceu!\n", cidadeCarta1);
            } else if (areaCarta1 < areaCarta2) {
                printf("Resultado: Carta 02 (%s) venceu!\n", cidadeCarta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3:
            printf("Comparação de cartas: PIB.\n");
            printf("Carta 01 - %s: %u\n", cidadeCarta1, pibCarta1);
            printf("Carta 02 - %s: %u\n", cidadeCarta2, pibCarta2);
            if (pibCarta1 > pibCarta2) {
                printf("Resultado: Carta 01 (%s) venceu!\n", cidadeCarta1);
            } else if (pibCarta1 < pibCarta2) {
                printf("Resultado: Carta 02 (%s) venceu!\n", cidadeCarta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4:
            printf("Comparação de cartas: Pontos Turísticos.\n");
            printf("Carta 01 - %s: %.2f\n", cidadeCarta1, pontosTuristicosCarta1);
            printf("Carta 02 - %s: %.2f\n", cidadeCarta2, pontosTuristicosCarta2);
            if (pontosTuristicosCarta1 > pontosTuristicosCarta1) {
                printf("Resultado: Carta 01 (%s) venceu!\n", cidadeCarta1);
            } else if (pontosTuristicosCarta1 < pontosTuristicosCarta2) {
                printf("Resultado: Carta 02 (%s) venceu!\n", cidadeCarta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5:
            printf("Comparação de cartas: Densidade Populacional.\n");
            printf("Carta 01 - %s: %.2f\n", cidadeCarta1, densidadeCarta1);
            printf("Carta 02 - %s: %.2f\n", cidadeCarta2, densidadeCarta2);
            if (densidadeCarta2 > densidadeCarta1) {
                printf("Resultado: Carta 01 (%s) venceu!\n", cidadeCarta1);
            } else if (densidadeCarta2 < densidadeCarta1) {
                printf("Resultado: Carta 02 (%s) venceu!\n", cidadeCarta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 6:
            printf("Comparação de cartas: Pib Per Capita.\n");
            printf("Carta 01 - %s: %.2f\n", cidadeCarta1, pibPerCapitaCarta1);
            printf("Carta 02 - %s: %.2f\n", cidadeCarta2, pibPerCapitaCarta2);
            if (pibPerCapitaCarta1 > pibPerCapitaCarta2) {
                printf("Resultado: Carta 01 (%s) venceu!\n", cidadeCarta1);
            } else if (pibPerCapitaCarta1 < pibPerCapitaCarta2) {
                printf("Resultado: Carta 02 (%s) venceu!\n", cidadeCarta2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("Opção inválida.");
            break;
    }

    return 0;
}
