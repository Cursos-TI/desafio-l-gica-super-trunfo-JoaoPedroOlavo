#include <stdio.h>

int main() {
    char estadoCarta1, estadoCarta2;
    char codigoCarta1[4], codigoCarta2[4];
    char cidadeCarta1[20], cidadeCarta2[20];
    unsigned int populacaoCarta1, populacaoCarta2;
    unsigned int pontosTuristicosCarta1, pontosTuristicosCarta2;
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

    // -------- Comparação --------
    printf("Comparação de cartas: Atributo (PIB Per Capita).\n");
    printf("Carta 01 - %s: %.2f\n", cidadeCarta1, pibPerCapitaCarta1);
    printf("Carta 02 - %s: %.2f\n", cidadeCarta2, pibPerCapitaCarta2);

    if (pibPerCapitaCarta1 > pibPerCapitaCarta2) {
        printf("Resultado: Carta 01 (%s) venceu!\n", cidadeCarta1);
    } else if (pibPerCapitaCarta1 < pibPerCapitaCarta2) {
        printf("Resultado: Carta 02 (%s) venceu!\n", cidadeCarta2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
