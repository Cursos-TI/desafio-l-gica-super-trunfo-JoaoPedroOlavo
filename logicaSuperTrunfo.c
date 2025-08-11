#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estadoCarta1, estadoCarta2, codigoCarta1[5], codigoCarta2[5], cidadeCarta1[30], cidadeCarta2[30];
    unsigned int populacaoCarta1, populacaoCarta2, pontosTuristicosCarta1, pontosTuristicosCarta2;
    float areaCarta1, areaCarta2, pibCarta1, pibCarta2;
    float densidadeCarta1, densidadeCarta2, pibPerCapitaCarta1, pibPerCapitaCarta2;

    // Cadastro das Cartas:
    //Carta 1
    // Realizando a entrada de dados referente ao Estado, utilizando da letra A até H para representar os 8 estados
    printf("Informe o estado ('A até H'): ");
    scanf("%c", &estadoCarta1);

    // Realizando a entrada de dados referente ao código da carta, letra seguida de número 1 ao 4
    printf("Informe o código da carta: ");
    scanf("%s", &codigoCarta1);

    // Realizando a entrada de dados referente ao nome da cidade
    printf("Informe o nome da cidade: ");
    scanf("%s", &cidadeCarta1);

    // Realizando a entrada de dados refente ao número de habitantes da cidade
    printf("Informe o número de habitantes da cidade: ");
    scanf("%u", &populacaoCarta1);

    // Realizando a entrada de dados referente à área da cidade (em km²)
    printf("Informe a área da cidade em km²: ");
    scanf("%f", &areaCarta1);

    // Realizando a entrada de dados referente ao PIB
    printf("Informe o PIB: ");
    scanf("%f", &pibCarta1);

    // Realizando a entrada de dados referente ao número de pontos turisticos
    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%u", &pontosTuristicosCarta1);

    densidadeCarta1 = populacaoCarta1 / areaCarta1;
    pibPerCapitaCarta1 = pibCarta1 / populacaoCarta1;

    //Carta 2
    // Realizando a entrada de dados referente ao Estado, utilizando da letra A até H para representar os 8 estados
    printf("Informe o estado ('A até H'): ");
    scanf("%c", &estadoCarta2);

    // Realizando a entrada de dados referente ao código da carta, letra seguida de número 1 ao 4
    printf("Informe o código da carta: ");
    scanf("%s", &codigoCarta2);

    // Realizando a entrada de dados referente ao nome da cidade
    printf("Informe o nome da cidade: ");
    scanf("%s", &cidadeCarta2);

    // Realizando a entrada de dados refente ao número de habitantes da cidade
    printf("Informe o número de habitantes da cidade: ");
    scanf("%u", &populacaoCarta2);

    // Realizando a entrada de dados referente à área da cidade (em km²)
    printf("Informe a área da cidade em km²: ");
    scanf("%f", &areaCarta2);

    // Realizando a entrada de dados referente ao PIB
    printf("Informe o PIB: ");
    scanf("%f", &pibCarta2);

    // Realizando a entrada de dados referente ao número de pontos turisticos
    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%u", &pontosTuristicosCarta2);

    densidadeCarta2 = populacaoCarta2 / areaCarta2;
    pibPerCapitaCarta2 = pibCarta2 / populacaoCarta2;


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    if (pibPerCapitaCarta1 > pibPerCapitaCarta2){
        printf("Comparação de cartar: Atributo (PIB Per Capita).\n");
        printf("Carta 01 - %s: %.2f.\n", cidadeCarta1, pibPerCapitaCarta1);
        printf("Carta 02 - %s: %.2f.\n", cidadeCarta2, pibPerCapitaCarta2);
        printf("Resultado: Carta 01 (%s) venceu!\n", cidadeCarta1);
    } else {
        printf("Comparação de cartar: Atributo (PIB Per Capita).\n");
        printf("Carta 01 - %s: %.2f.\n", cidadeCarta1, pibPerCapitaCarta1);
        printf("Carta 02 - %s: %.2f.\n", cidadeCarta2, pibPerCapitaCarta2);
        printf("Resultado: Carta 02 (%s) venceu!\n", cidadeCarta2);
    }

    return 0;
}
