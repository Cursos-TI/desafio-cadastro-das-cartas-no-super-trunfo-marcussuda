#include <stdio.h>

int main() {
    
    char estado; //variável para colocar nome do estado
    char codigo [3]; //variável para colocar o código da carta
    char nome [30]; //variável para colocar o nome da cidade
    int populacao; //variável para colocar a quantidade da população
    float area; //variável para colocar a área que a cidade ocupa
    float pib; //variável para colocar o PIB da cidade
    int pontos; //variável para colocar quantos pontos turísticos existem na cidade

    printf("CARTA 01 \n");//carta 01 do jogo

    printf("Estado: "); //saída de dados representa qual o estado na carta
    scanf("%s", &estado); //entrada de dados para se colocar o estado

    printf("Código da Carta: "); //saída de dados representa qual o codigo da carta
    scanf("%s", &codigo); //entrada de dados para se colocar o código da carta com uma letra e dois números

    printf("Nome da Cidade: "); //saída de dados representa qual o Nome da Cidade da carta
    scanf("%s", &nome); //entrada de dados para se colocar o Nome da cidade na carta

    printf("População: "); //saída de dados representa qual a População da cidade
    scanf("%d", &populacao); //entrada de dados para se colocar quantidade da população 

    printf("Área km²: "); //saída de dados representa qual a área em km² da cidade
    scanf("%d", &area); //entrada de dados para se colocar a área que a cidade ocupa

    printf("PIB Per Capita: "); //saída de dados representa qual o PIB per capita da cidade
    scanf("%d", &pib); //entrada de dados para se colocar o PIB per capita

    printf("Número de Pontos Turísticos: "); //saída de dados representa qual a quantidade de pontos turísticos da cidade
    scanf("%d", &pontos) ; //entrada de dados para se colocar qual a quantidade de pontos turísticos da cidade

    printf("\nCARTA 02 \n");//carta 02 do jogo

    printf("Estado: "); //saída de dados representa qual o estado na carta
    scanf("%s", &estado); //entrada de dados para se colocar o estado
    
    printf("Código da Carta: "); //saída de dados representa qual o codigo da carta
    scanf("%s", &codigo); //entrada de dados para se colocar o código da carta com uma letra e dois números
    
    printf("Nome da Cidade: "); //saída de dados representa qual o Nome da Cidade da carta
    scanf("%s", &nome); //entrada de dados para se colocar o Nome da cidade na carta
    
    printf("População: "); //saída de dados representa qual a População da cidade
    scanf("%d", &populacao); //entrada de dados para se colocar quantidade da população 
    
    printf("Área km²: "); //saída de dados representa qual a área em km² da cidade
    scanf("%d", &area); //entrada de dados para se colocar a área que a cidade ocupa
    
    printf("PIB Per Capita: "); //saída de dados representa qual o PIB per capita da cidade
    scanf("%d", &pib); //entrada de dados para se colocar o PIB per capita
    
    printf("Número de Pontos Turísticos: "); //saída de dados representa qual a quantidade de pontos turísticos da cidade
    scanf("%d", &pontos); //entrada de dados para se colocar qual a quantidade de pontos turísticos da cidade

    return 0;
}
