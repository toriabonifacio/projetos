#include <stdio.h>

int main(){
    unsigned int populacao1, populacao2, pontos1, pontos2;
    int escolhaJogador1, escolhaJogador2;
    float area1, area2;
    float pib1, pib2;
    float densidade1;
    float densidade2;
    float percapta1;
    float percapta2;
    float poder1, poder2;
    char estado1, estado2;
    char carta1[20], carta2[20];
    char nome1[20], nome2[20];

   //populacao1 e populacao2 são usados para declarar variavel que irá hospedar o número de habitantes de cada carta;
    //pontos1 e pontos2 são usados para armazenar o número de pontos turisticos de cada cidade;
    //area1 e area2 armazenam a área de cada cidade;
    //pib1 e pib2 armazenam o pib de cada cidade;
    //estado1 e estado2 são usados para armazenar o caractere que será usado para representar cada carta;
    //carta1 e carta2 armazenam o código da carta;
    //nome1 e nome2 são usados para armazenar o nome da cidade que o jogador escolher para cada carta.
  
    printf("***Carta 1*** \n");

    printf("Digite um caractere para representar seu estado de A a H: ");
    scanf("%c", &estado1);

    printf("Digite o codigo que irá ser usado para representar a Carta 1, baseado no caractrere que você escolheu (por ex.: A01) ");
    scanf(" %s", &carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome1);

    printf("Digite a população: ");
    scanf("%u", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("***Carta 2*** \n");

    printf("Digite um caractere para representar seu estado de A a H: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo que irá ser usado para representar a Carta 2, baseado no caractrere que você escolheu (por ex.: A01) ");
    scanf(" %s", &carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome2);

    printf("Digite a população: ");
    scanf("%u", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    printf("Carta 1: \n");
    printf("Nome do Estado: %c \n", estado1);
    printf("Código da Carta: %s \n", carta1);
    printf("Nome da cidade: %s \n", nome1);
    printf("População: %u \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontos1);
    densidade1 = (float) populacao1 / area1;

        //a variável densidade1 e densidaded2 armazenam os valores de população e área de cada carta e dividi-los para que possamos saber qual a densidade populacional de cada cidade.

    printf("Densidade Populacional: %f hab/km² \n", densidade1);
    percapta1 = (float) pib1 / populacao1;

        //a variável percapta1 e percapta2 armazenam os valores do pib e da população de cada carta, divide os mesmo e resulta no valor do pib percapta de cada cidade.

    printf("PIB per Capta: %f\n reais", percapta1);

        //a variável poder1 e poder2 armazenam os valores da população, área, pib, pontos turísticos, pib percapta e densidade e os soma, logo após dividimos pela densidadde para que possamos saber o valor do poder de cada carta.

    poder1 = (float) populacao1 + area1 + pib1 + pontos1 + percapta1 + densidade1 / densidade1;
    printf("Super Poder: %f\n", poder1);

    printf("Carta 2: \n");
    printf("Nome do Estado: %c \n", estado2);
    printf("Código da Carta: %s \n", carta2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %u \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos2);
    densidade2 = (float) populacao2 / area2;
    printf("Densidade Populacional: %f hab/km²\n", densidade2);
    percapta2 = (float) pib2 / populacao2;
    printf("PIB er Capta: %f reais\n", percapta2);
    poder2 = (float) populacao2 + area2 + pib2 + pontos2 + percapta2 + densidade2 / densidade1;
    printf("Super Poder: %f\n", poder2);

        //aqui criamos um switch para que o jogador possa comparar o atributo que quiser.

    printf("****Comparação de Cartas ****\n");

    printf("escolha qual atributo deseja comparar:\n");
    printf("1. nome do pais\n");
    printf("2. população\n");
    printf("3. area\n");
    printf("4. PIB \n");
    printf("5. numero de pontos turisticos\n");
    printf("6. densidade populacional\n");
    printf("digite sua escolha: \n");
    scanf("%d", &escolhaJogador1);

    switch(escolhaJogador1){
    case 1:
    printf("%s e %s\n", nome1, nome2);
    break;
    case 2:
    if(populacao1 > populacao2){
        printf("Carta 1 tem %u de habitantes sendo maior que de Carta 2, Carta 1 venceu!\n", populacao1);
    } else if (populacao1 < populacao2){
        printf("Carta 2 tem %u de habitantes sendo maior que de Carta 1, Carta 2 venceu!\n", populacao2);
    } else {
        printf("Houve um empate\n");
    }
    break;
    case 3:
    if (area1 > area2){
        printf("A área da Carta 1 é %.2f hm² sendo maior do que a da Carta 2, Carta 1 vence!\n", area1);
    } else if (area1 < area2){
        printf("A área da Carta 2 é %.2f km² sendo maior do que a da Carta 1, Carta 2 vence!\n", area1);
    } else {
        printf("Houve um empate\n");
    }
    break;
     case 4:
     if(pib1 > pib2){
        printf("O PIB da Carta 1 é R$ %.2f sendo maior que o PIB da Carta 2, Carta 1 vence!\n", pib1);
     } else if (pib1 < pib2){
        printf("O PIB da Carta 2 é R$ %.2f sendo maior que o PIB da Carta 1, Carta 2 vence!\n", pib2);
     } else {
        printf("Houve um empate\n");
     }
    break;
     case 5:
     if (pontos1 > pontos2){
        printf("A Carta 1 tem %u pontos turisticos tendo mais pontos que a Carta 2, Carta 1 vence!\n", pontos1);
     } else if (pontos1 < pontos2){
        printf("A Carta 2 tem %u pontos turisticos tendo mais pontos que a Carta 1, Carta 2 vence!\n", pontos2);
     } else {
        printf("Houve um empate\n");
     }
    break;
     case 6:

    //aqui a carta que possuir menor valor de densidade vence.

     if(densidade1 > densidade2){
        printf("Carta 2 tem %.2f sendo menor que a densidade populacional da Carta 1, Carta 2 venceu!\n", densidade1);
     } else if(densidade1 < densidade2){
        printf("Carta 1 tem %.2f hab/km² sendo menor que a densidade populacional da Carta 2, Carta 1 venceu!\n", densidade2);
     } else {
        printf("Houve um empate\n");
     }
    break;
    default:
    printf("Opção invalida\n");
     break;
    }

    //aqui criamos outro campo para que o jogador possa comparar outro atributo que quiser.

    printf("escolha qual atributo deseja comparar:\n");
    printf("P.S: não poderá ser o mesmo atributo escolhido anteriormente!!!\n");
    printf("1. nome do pais\n");
    printf("2. população\n");
    printf("3. area\n");
    printf("4. PIB \n");
    printf("5. numero de pontos turisticos\n");
    printf("6. densidade populacional\n");
    printf("digite sua escolha: \n");
    scanf("%d", &escolhaJogador2);

    if(escolhaJogador1 == escolhaJogador2){
        printf("Este atributo já foi escolhiddo!\n");
    } else {
        switch(escolhaJogador1){
    case 1:
    printf("%s e %s\n", nome1, nome2);
    break;
    case 2:
    if(populacao1 > populacao2){
        printf("Carta 1 tem %u de habitantes sendo maior que de Carta 2, Carta 1 venceu!\n", populacao1);
    } else if (populacao1 < populacao2){
        printf("Carta 2 tem %u de habitantes sendo maior que de Carta 1, Carta 2 venceu!\n", populacao2);
    } else {
        printf("Houve um empate\n");
    }
    break;
    case 3:
    if (area1 > area2){
        printf("A área da Carta 1 é %.2f hm² sendo maior do que a da Carta 2, Carta 1 vence!\n", area1);
    } else if (area1 < area2){
        printf("A área da Carta 2 é %.2f km² sendo maior do que a da Carta 1, Carta 2 vence!\n", area1);
    } else {
        printf("Houve um empate\n");
    }
    break;
     case 4:
     if(pib1 > pib2){
        printf("O PIB da Carta 1 é R$ %.2f sendo maior que o PIB da Carta 2, Carta 1 vence!\n", pib1);
     } else if (pib1 < pib2){
        printf("O PIB da Carta 2 é R$ %.2f sendo maior que o PIB da Carta 1, Carta 2 vence!\n", pib2);
     } else {
        printf("Houve um empate\n");
     }
    break;
     case 5:
     if (pontos1 > pontos2){
        printf("A Carta 1 tem %u pontos turisticos tendo mais pontos que a Carta 2, Carta 1 vence!\n", pontos1);
     } else if (pontos1 < pontos2){
        printf("A Carta 2 tem %u pontos turisticos tendo mais pontos que a Carta 1, Carta 2 vence!\n", pontos2);
     } else {
        printf("Houve um empate\n");
     }
    break;
     case 6:
     if(densidade1 > densidade2){
        printf("Carta 2 tem %.2f sendo menor que a densidade populacional da Carta 1, Carta 2 venceu!\n", densidade1);
     } else if(densidade1 < densidade2){
        printf("Carta 1 tem %.2f hab/km² sendo menor que a densidade populacional da Carta 2, Carta 1 venceu!\n", densidade2);
     } else {
        printf("Houve um empate\n");
     }
    break;
    default:
    printf("Opção invalida\n");
     break;
    }
    }


}
   


    


