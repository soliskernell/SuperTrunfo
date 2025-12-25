#include <stdio.h>
int main()
{
    //CARTAS DO JOGO - 4 CARTAS
    //CARTA 1
    int carta_1 = 1;
    char estado_1[16] = "SÃO PAULO";
    char codigo_1[5] = "SP1";
    char nomeCidade_1[15] = "SÃO PAULO";
    unsigned long int populacao_1 = 11500000;
    float area_1 = 1521;
    double PIB_1 = 829.200000000;
    int pontosturisticos_1 = 15;
    float DesnsidadePopulacional_1 = populacao_1 / area_1;
    float PIBPerCapita_1 = (PIB_1 * 1000000000.0) / populacao_1;
    float SUPER_PODER_1 = (area_1 / populacao_1) + PIB_1 + PIBPerCapita_1 + populacao_1 + (float) pontosturisticos_1 + area_1;
  

    //CARTA 2
    int carta_2 = 2;
    char estado_2[16] = "RIO DE JANEIRO";
    //char codigo_2[5] = "RJ1";
    char nomeCidade_2[15] = "RIO DE JANEIRO";
    unsigned long int populacao_2 = 6700000;
    float area_2 = 1260;
    double PIB_2 = 360.600000000;
    int pontosturisticos_2 = 14;
    float DesnsidadePopulacional_2 = populacao_2 / area_2;
    float PIBPerCapita_2 = (PIB_2 * 1000000000.0) / populacao_2;
    float SUPER_PODER_2 = (area_2 / populacao_2) + PIB_2 + PIBPerCapita_2 + populacao_2 + (float) pontosturisticos_2 + area_2;

    //CARTA 3
    int carta_3 = 3;
    char estado_3[15] = "BAHIA";
    char codigo_3[5] = "BA1";
    char nomeCidade_3[15] = "SALVADOR";
    unsigned long int populacao_3 = 2400000;
    float area_3 = 700;
    double PIB_3 = 87.000000000;
    int pontosturisticos_3 = 12;
    float DesnsidadePopulacional_3 = populacao_3 / area_3;
    float PIBPerCapita_3 = (PIB_3 * 1000000000.0) / populacao_3;
    float SUPER_PODER_3 = (area_3 / populacao_3) + PIB_3 + PIBPerCapita_3 + populacao_3 + (float) pontosturisticos_3 + area_3;

    //CARTA 4
    int carta_4 = 4;
    char estado_4[15] = "AMAZONAS";
    char codigo_4[5] = "MA1";
    char nomeCidade_4[15] = "MANAUS";
    unsigned long int populacao_4 = 2280000;
    float area_4 = 11.401;
    double PIB_4 = 43.000000000;
    int pontosturisticos_4 = 9;
    float DesnsidadePopulacional_4 = populacao_4 / area_4;
    float PIBPerCapita_4 = (PIB_4 * 1000000000.0) / populacao_4;
    float SUPER_PODER_4 =  (area_4 / populacao_4) + PIB_4 + PIBPerCapita_4 + populacao_4 + (float) pontosturisticos_4 + area_4;

    // MENU CARTAS - escolhendo as cartas e atibutos
    int carta; 
    int escolha = 0;
    int atributo_escolhido;
    // ********Variáveis para armazenar os valores das cartas escolhidas
    unsigned long pop1, pop2;
    float area1, densid1, pibperc1, super1;
    float area2, densid2, pibperc2, super2;
    double pib1, pib2;
    int pontoturst1, pontoturist2;

    
    do {
        if (escolha == 0) {
            printf("\n**** ESCOLHA A 1ª CARTA ****\n");
        } else if(escolha == 1){
            printf("\n**** AGORA ESCOLHA A 2ª CARTA ****\n");
        }
                
        printf("1. CARTA: SÃO PAULO - SP\n");
        printf("2. CARTA: RIO DE JANEIRO - RJ\n");
        printf("3. CARTA: SALVADOR - BA\n");
        printf("4. CARTA: AMAZONAS - AM\n");
        printf("0. SAIR\n");
        scanf("%d", &carta);

        // IMPLEMENTADO O SWITCH****************
        switch (carta) {
            case 1: 
                printf("\n## CARTA 1 - SÃO PAULO-SP ##\n");
                printf("-- ATRIBUTOS --\n\n");
                printf("ESTADO: %s\n", estado_1);
                printf("CIDADE: %s\n", nomeCidade_1);
                printf("POPULAÇÃO: %lu\n", populacao_1);
                printf("ÁREA: %.0f Km²\n", area_1);
                printf("PIB: R$ %.1lf BILHÕES\n", PIB_1);
                printf("PONTOS TURÍSTICOS: %d\n", pontosturisticos_1);
                printf("DENSIDADE POPULACIONAL: %.1f HAB./Km²\n", DesnsidadePopulacional_1);
                printf("PIB PER CAPITA: R$ %.2f\n", PIBPerCapita_1);
                printf("SUPER PODER: %.2f\n", SUPER_PODER_1);
                if( escolha == 0) {
                    pop1 = populacao_1;
                    area1 = area_1;
                    densid1 = DesnsidadePopulacional_1;
                    pontoturst1 = pontosturisticos_1;
                    pib1 = PIB_1;
                    pibperc1 = PIBPerCapita_1;
                    super1 = SUPER_PODER_1;            
                } else{
                    pop2 = populacao_1;
                    area2 =  area_1;
                    densid2 = DesnsidadePopulacional_1;
                    pontoturist2 = pontosturisticos_1;                    
                    pib2 = PIB_1;
                    pibperc2 = PIBPerCapita_1;
                    super2 = SUPER_PODER_1;        
                }                                   
                
                escolha++;
                break;
  
            case 2:
                printf("\n## CARTA 2 - RIO DE JANEIRO-RJ ##\n");
                printf("-- ATRIBUTOS --\n\n");
                printf("ESTADO: %s\n", estado_2);
                printf("CIDADE: %s\n", nomeCidade_2);
                printf("POPULAÇÃO: %lu\n", populacao_2);
                printf("ÁREA: %.0f Km²\n", area_2);
                printf("PIB: R$ %.1lf BILHÕES\n", PIB_2);
                printf("PONTOS TURÍSTICOS: %d\n", pontosturisticos_2);
                printf("DENSIDADE POPULACIONAL: %.1f HAB./Km²\n", DesnsidadePopulacional_2);
                printf("PIB PER CAPITA: R$ %.2f\n", PIBPerCapita_2);
                printf("SUPER PODER: %.2f\n", SUPER_PODER_2);
                if( escolha == 0) {
                    pop1 = populacao_2;
                    area1 = area_2;
                    densid1 = DesnsidadePopulacional_2;
                    pontoturst1 = pontosturisticos_2;
                    pib1 = PIB_2;
                    pibperc1 = PIBPerCapita_2;
                    super1 = SUPER_PODER_2;            
                } else{
                    pop2 = populacao_2;
                    area2 =  area_2;
                    densid2 = DesnsidadePopulacional_2;
                    pontoturist2 = pontosturisticos_2;                    
                    pib2 = PIB_2;
                    pibperc2 = PIBPerCapita_2;
                    super2 = SUPER_PODER_2;        
                }                         
                escolha++;  
                break;

            case 3:
                printf("\n## CARTA 3 - SALVADOR-BA ##\n");
                printf("-- ATRIBUTOS --\n\n");
                printf("ESTADO: %s\n", estado_3);
                printf("CIDADE: %s\n", nomeCidade_3);
                printf("POPULAÇÃO: %lu\n", populacao_3);
                printf("ÁREA: %.0f Km²\n", area_3);
                printf("PIB: R$ %.1lf BILHÕES\n", PIB_3);
                printf("PONTOS TURÍSTICOS: %d\n", pontosturisticos_3);
                printf("DENSIDADE POPULACIONAL: %.1f HAB./Km²\n", DesnsidadePopulacional_3);
                printf("PIB PER CAPITA: R$ %.2f\n", PIBPerCapita_3);
                printf("SUPER PODER: %.2f\n", SUPER_PODER_3);
                if( escolha == 0) {
                    pop1 = populacao_3;
                    area1 = area_3;
                    densid1 = DesnsidadePopulacional_3;
                    pontoturst1 = pontosturisticos_3;
                    pib1 = PIB_3;
                    pibperc1 = PIBPerCapita_3;
                    super1 = SUPER_PODER_3;            
                } else{
                    pop2 = populacao_3;
                    area2 =  area_3;
                    densid2 = DesnsidadePopulacional_3;
                    pontoturist2 = pontosturisticos_3;                    
                    pib2 = PIB_3;
                    pibperc2 = PIBPerCapita_3;
                    super2 = SUPER_PODER_3; 
                }    
                escolha++;  
                break;

            case 4:
                printf("\n## CARTA 4 - AMAZONAS-AM ##\n");
                printf("-- ATRIBUTOS --\n\n");
                printf("ESTADO: %s\n", estado_4);
                printf("CIDADE: %s\n", nomeCidade_4);
                printf("POPULAÇÃO: %lu\n", populacao_4);
                printf("ÁREA: %.0f Km²\n", area_4);
                printf("PIB: R$ %.1lf BILHÕES\n", PIB_4);
                printf("PONTOS TURÍSTICOS: %d\n", pontosturisticos_4);
                printf("DENSIDADE POPULACIONAL: %.1f HAB./Km²\n", DesnsidadePopulacional_4);
                printf("PIB PER CAPITA: R$ %.2f\n", PIBPerCapita_4);
                printf("SUPER PODER: %.2f\n", SUPER_PODER_4);
                if( escolha == 0) {
                    pop1 = populacao_4;
                    area1 = area_4;
                    densid1 = DesnsidadePopulacional_4;
                    pontoturst1 = pontosturisticos_4;
                    pib1 = PIB_4;
                    pibperc1 = PIBPerCapita_4;
                    super1 = SUPER_PODER_4;            
                } else{
                    pop2 = populacao_4;
                    area2 =  area_4;
                    densid2 = DesnsidadePopulacional_4;
                    pontoturist2 = pontosturisticos_4;                    
                    pib2 = PIB_4;
                    pibperc2 = PIBPerCapita_4;
                    super2 = SUPER_PODER_4; 
                }    
                escolha++;  
                break;        


            case 0: 
                printf("SAIR\n"); 
                escolha = 2;
                break; 
                         

            default:
                printf("OPÇÃO INVÁLIDA\n");
                break;
    }

    } while (escolha < 2);

    printf("\n>>>>>>>>> REGRAS >>>>>>>>>\n");
    printf(">>>>> GANHA A CARTA COM MAIOR ATRIBUTO >>>>>\n");
    printf(">>>> O ATRIBUTO DENSIDADE POPULACIONAL, A MENOR GANHA >>>>>\n\n");
    printf(">>>>> ESCOLHA UM ATRIBUTO PARA COMPARAR ENTRE AS CARTAS >>>>>\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Densidade\n");
    printf("4. PIB\n");
    printf("5. Pontos Turísticos\n");
    printf("6. Super Poder\n");
    scanf("%d", &atributo_escolhido);

 // COMPARAÇÃO IF...ELSE IF ... ELSE   
    printf("\n++++++++++ RESULTADO DA DISPUTA ++++++++++\n");
    if (atributo_escolhido == 1){
        printf("==Comparando a POPULAÇÃO:==\n");
        if( pop1 > pop2){ 
            printf("VENCEDOR: ***1ª CARTA!\n");
        }else{ printf("VENCEDOR: *** 2ª CARTA!\n"); }
    } 
    else if ( atributo_escolhido == 2){
        printf("==Comparando a ÁREA:==\n");
        if( area1 > area2){
            printf("VENCEDOR: ***1ª CARTA\n");           
        }else{
            printf("VENCEDOR: ***2ª CARTA!\n");
        }
    }
    else if( atributo_escolhido == 3){
        printf("==Comparando a DENSIDADE:==\n");
        if( densid1 < densid2){
            printf("VENCEDOR: ***1ª CARTA!\n");
        }else{
            printf("VENCEDOR: ***2ª CARTA!\n");
        }
    }
    else if( atributo_escolhido == 4){
        printf("==Comparando O PIB==\n");
        if( pib1 > pib2){
            printf("VENCEDOR: ***1ª CARTA!\n");
        }else {
            printf("VENCEDOR: ***2ª CARTA!");
        }
    }
    else if ( atributo_escolhido == 5){
        printf("==Comparando os PONTOS TURÍSTICOS:==\n");
        if( pontoturst1 > pontoturist2){
            printf("VENCEDOR: ***1ª CARTA!\n");
        }else{ 
            printf("VENCEDOR: ***2ª CARTA!\n");
        }
    }
    else if(atributo_escolhido == 6){
        printf("==Comparando o SUPER PODER==\n");
        if(super1 > super2){
            printf("VENCEDOR: ***1ª CARTA!");
        }else{ 
            printf("VENCEDOR: ***2ª CARTA!");
        }
    }

           

return 0;
}

