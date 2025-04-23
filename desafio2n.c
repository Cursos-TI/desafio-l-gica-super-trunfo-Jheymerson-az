#include <stdio.h>

int main() {
    // VARIAVEIS CARTA 1
    char Estado;
    char Codc[10];
    char Cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int Pontos;
    float densidade;
    float capita, super1;


   // COLETA DE DADOS CARTA 1
    printf("Digite seu estado: \n");
    scanf(" %c", &Estado);

    printf("Digite seu código: \n");
    scanf("%s", Codc);

    printf("Digite sua cidade: \n");
    scanf("%s", Cidade);

    printf("Digite o número de população: \n");
    scanf("%d", &Populacao);

    printf("Digite sua área (em km²): \n");
    scanf("%f", &Area);

    printf("Digite seu PIB (em bilhões de reais): \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Pontos);
    // CALCULANDO VALORES CARTA 1
    densidade = Populacao / Area;
    capita = PIB / Populacao;
    super1 = (float)Populacao + Area + PIB + Pontos + capita + (1 / densidade);



    // VARIAVEIS CARTA 2
    char Estado2;
    char Codc2[10];
    char Cidade2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos2;
    float densidade2;
    float capita2, super2;

    // COLETA DE DADOS CARTA 2
    printf("Digite seu estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite seu código: \n");
    scanf("%s", Codc2);

    printf("Digite sua cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite o número de população: \n");
    scanf("%d", &Populacao2);

    printf("Digite sua área (em km²): \n");
    scanf("%f", &Area2);

    printf("Digite seu PIB (em bilhões de reais): \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Pontos2);
    // CAUCULANDO VALORES CARTA 2
    densidade2 = Populacao / Area;
    capita2 = PIB / Populacao;
    super2 = (float)Populacao2 + Area2 + PIB2 + Pontos2 + capita2 + (1 / densidade2);

    // EXIBIÇÃO DADOS CARTA 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codc);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km² \n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Pontos);
    printf("Densidade Populacional: %f hab/km²\n", densidade);
    printf("PIB per Capita: %f reais\n", capita);
    printf("Super Poder: %.2f\n", super1);

    // EXIBICAO CARTA 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codc2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pontos2);
    printf("Densidade Populacional: %f hab/km²\n", densidade2);
    printf("PIB per Capita: %f reais\n", capita2);
    printf("Super Poder: %.2f\n", super2);

    // COMPARAÇÕES
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", Populacao > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Pontos > Pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", capita > capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

    // COMPARAÇÃO EM IF 
    if (Populacao > Populacao2){
        printf("CARTA 1 VENCEU!\n");
    } else{
        printf("CARTA 2 VENCEU!\n");
    }
    
    
    

    return 0;
}
