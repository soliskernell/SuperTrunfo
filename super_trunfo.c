#include <stdio.h>
int main()
{
//DADOS PARA A CARTA 01
int carta_1 = 1;
char estado_1[5];
char codigo_1[5];
char nomeCidade_1[15];
unsigned long int populacao_1;
float area_1;
double PIB_1;
int pontosturisticos_1;
float DesnsidadePopulacional_1;
float PIBPerCapita_1;
float SUPER_PODER_1;

//TRECHO PARA CARTA 01
printf("--Vamos começar o jogo!-- \n");
printf("Carta - %02d\n\n", carta_1);

printf("Digite um Estado com 2 letras(exemplo: BA):");
scanf("%s", estado_1);
printf("Estado: %s\n", estado_1);

printf("Digite o código do estado(ex: AM18)");
scanf("%s", codigo_1);
printf("Código: %s\n",codigo_1);

printf("Digite o nome de uma cidade:");
scanf("%s", nomeCidade_1);
printf("Cidade: %s\n",nomeCidade_1);

printf("Digite a população da cidade:");
scanf("%lu", &populacao_1);
printf("População: %lu\n", populacao_1);

printf("Digite a área(km) da cidade:");
scanf("%f", &area_1);
printf("Área: %.2f Km²\n", area_1);

printf("Digite o PIB da cidade:");
scanf("%lf", &PIB_1);
printf("PIB: R$%.2lf\n", PIB_1);

printf("Digite a quantidade de pontos turísticos da cidade:");
scanf("%d", &pontosturisticos_1);
printf("Pontos Turísticos: %d\n", pontosturisticos_1);

// CALCULANDO O PIB PER CAPITA E DENSIDADE POPULACIONAL DA CARTA 1
DesnsidadePopulacional_1 = populacao_1 / area_1;
PIBPerCapita_1 = PIB_1 / populacao_1;

printf("Densidade Populacional: %.2f\n", DesnsidadePopulacional_1); //  A CARTA COM MENOR VALOR VENCE
printf("PIB Per Capita: R$%.2f\n", PIBPerCapita_1);

//CALCULANDO O SUPER PODER CARTA 1
//float inversoDensidadePopulacional = area_1 / populacao_1;
SUPER_PODER_1 = (area_1 / populacao_1) + PIB_1 + PIBPerCapita_1 + populacao_1 + (float) pontosturisticos_1 + area_1;
printf("SUPER PODER: %.2f\n\n", SUPER_PODER_1);


//DADOS PARA A CARTA 02
int carta_2 = 2;
char estado_2[5];
char codigo_2[5];
char nomeCidade_2[15];
unsigned long int populacao_2;
float area_2;
double PIB_2;
int pontosturisticos_2;
float DensidadePopulacional_2;
float PIBPerCapita_2;
float SUPER_PODER_2;

// TRECHO PARA CARTA 2
printf("--Agora é hora da carta 02.--\n");
printf("Carta - %02d\n\n", carta_2);

printf("Digite outro Estado com 2 letras(exemplo: BA):");
scanf("%s", estado_2);
printf("Estado: %s\n", estado_2);

printf("Digite o código do estado(ex: AM18)");
scanf("%s", codigo_2);
printf("Código: %s\n",codigo_2);

printf("Digite o nome de uma cidade:");
scanf("%s", nomeCidade_2);
printf("Cidade: %s\n",nomeCidade_2);

printf("Digite a população da cidade:");
scanf("%lu", &populacao_2);
printf("População: %lu\n", populacao_2);

printf("Digite a área(km) da cidade:");
scanf("%f", &area_2);
printf("Área: %.2f Km²\n", area_2);

printf("Digite o PIB da cidade:");
scanf("%lf", &PIB_2);
printf("PIB: R$%.2lf\n", PIB_2);

printf("Digite a quantidade de pontos turísticos da cidade:");
scanf("%d", &pontosturisticos_2);
printf("Pontos Turísticos: %d\n", pontosturisticos_2);

// CALCULANDO O PIB PER CAPITA E DENSIDADE POPULACIONAL DA CARTA 2
DensidadePopulacional_2 = populacao_2 / area_2;  //  A CARTA COM MENOR VALOR VENCE
PIBPerCapita_2 = PIB_2 / populacao_2;

printf("Densidade Populacional: %.2f\n", DensidadePopulacional_2);
printf("PIB Per Capita: %.2f\n", PIBPerCapita_2);

//CALCULANDO O SUPER PODER CARTA 2
//float inversoDensidadePopulacional = area_2 / populacao_2;
SUPER_PODER_2 = (area_2 / populacao_2) + PIB_2 + PIBPerCapita_2 + populacao_2 + (float) pontosturisticos_2 + area_2; 
printf("SUPER PODER: %.2f\n\n", SUPER_PODER_2);

//COMPARANDO AS CARTAS 
printf("--COMPARANDO OS ATRIBUTOS--\n\n");
printf("População 1 MAIOR que População 2?: %d\n(0 = CARTA 2 VENCEU) - (1 = CARTA 1 VENCEU)\n\n", populacao_1 > populacao_2);
printf("Área 1 MENOR que Área 2?: %d\n(0 = CARTA 1 VENCEU) - (1 = CARTA 2 VENCEU)\n\n", area_1 < area_2);
printf("Densidade Populacional 1 MAIOR que Densidade Populacional 2?: %d\n(0 = CARTA 1 VENCEU) - (1 = CARTA 2 VENCEU)\n\n", DesnsidadePopulacional_1 > DensidadePopulacional_2);




return 0;
}
