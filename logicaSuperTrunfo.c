#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    char codigo[20];
    char estado[20];
    char cidade[20];
    int populacao;
    float area;
    float PIB;
    int turistico;
    float densidade_populacional;
    float PIB_per_capita;

    //Variáveis da Cidade_2
    char codigo2[20];
    char estado2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int turistico2;
    float densidade_populacional2;
    float PIB_per_capita2;
    

    //Cadastro de Dados da cidade 1
    printf("Digite o código da Cidade:");
    scanf("%s", &codigo);

    printf("Digite o Estado da Cidade:");
    scanf("%s", &estado);

    printf("Digite o nome da Cidade:");
    scanf("%s", &cidade);

    printf("Digite a população dessa cidade:");
    scanf("%d", &populacao);

    printf("Digite a area em metros dessa cidade:");
    scanf("%f", &area);

    printf("Digite o PIB dessa cidade:");
    scanf("%f", &PIB);

    printf("Digite quantos pontos turísticos tem nessa cidade:");
    scanf("%d", &turistico);

    //calculos da Densidade e PIB per capita da cidade 1
    densidade_populacional = (populacao / area); 
    PIB_per_capita = (PIB / populacao);


    //resultados de cadastro da cidade 1
    printf("***Segue Resultados da Cidade_1:***\n");
    printf("Código da Cidade : %s |  Nome da Cidade : %s\n", codigo, cidade);
    printf("O Estado é : %s \n",estado);
    printf("A população da Cidade : %d |  Area da Cidade: %.2f\n", populacao, area);
    printf("O PIB da cidade : %.2f |  Pontos Turísticos da Cidade : %d\n", PIB, turistico);  
    printf("A densidade Populacional é: %.2f\n", densidade_populacional);
    printf("O PIB per Capita é: %.2f\n", PIB_per_capita);
    
    


    //Cadastro de Dados da cidade 2
    printf("\nDigite o código da Cidade2:");
    scanf("%s", &codigo2);

    printf("Digite o Estado da Cidade2:");
    scanf("%s", &estado2);

    printf("Digite o nome da Cidade2:");
    scanf("%s", &cidade2);

    printf("Digite a população da Cidade2:");
    scanf("%d", &populacao2);

    printf("Digite a area em metros dessa Cidade2:");
    scanf("%f", &area2);

    printf("Digite o PIB dessa Cidade2:");
    scanf("%f", &PIB2);

    printf("Digite quantos pontos turísticos tem na Cidade2:");
    scanf("%d", &turistico2);

    //calculos da Densidade e PIB per capita da cidade 2
    densidade_populacional2 = (float) (populacao2 / area2); 
    PIB_per_capita2 = (float) (PIB2 / populacao2);

    //resultados de cadastro da cidade 2
    printf("***Segue Resultados da Cidade_2:***\n");
    printf("Código da Cidade : %s |  Nome da Cidade : %s\n", codigo2, cidade2);
    printf("O Estado é : %s \n",estado2);
    printf("A população da Cidade : %d |  Area da Cidade: %.2f\n", populacao2, area2);
    printf("O PIB da cidade : %.2f |  Pontos Turísticos da Cidade : %d\n", PIB2, turistico2);  
    printf("A densidade Populacional é: %.2f\n", densidade_populacional2);
    printf("O PIB per Capita é: %.2f\n", PIB_per_capita2);



    // Comparação de atributos
    printf("\n***Segue Resultados dos Pontos:***\n");
    if (populacao > populacao2){
        printf("\nA População da Cidade1 (%s) é VENCEDORA!!! \n",cidade);
    } else {
        printf("A População da Cidade2 (%s) é VENCEDORA!!! \n",cidade2);
    }
    if (area > area2){
        printf("A àrea da Cidade1 (%s) é VENCEDORA!!! \n",cidade);
    } else {
        printf("A àrea da Cidade2 (%s) é VENCEDORA!!! \n",cidade2);
    }
    if (PIB > PIB2){
        printf("O PIB da Cidade1 (%s) é VENCEDORA!!! \n",cidade);
    } else {
        printf("A PIB da Cidade2 (%s) é VENCEDORA!!! \n",cidade2);
    }
    if (turistico > turistico2){
        printf("Os Pontos turísticos da Cidade1 (%s) é VENCEDORA!!! \n",cidade);
    } else {
        printf("Os Pontos turísticos da Cidade2 (%s) é VENCEDORA!!! \n",cidade2);
    }
    if (densidade_populacional > densidade_populacional2){
        printf("A densidade Populacional da Cidade2 (%s) é VENCEDORA!!! \n",cidade2);
    } else {
        printf("A densidade Populacional da Cidade1 (%s) é VENCEDORA!!! \n",cidade);
    }


    return 0;
}