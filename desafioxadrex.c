#include <stdio.h>

void torre(int casas){
    if(casas > 0){
    printf("Direita\n");  //declarando o valor da torre.
    torre(casas - 1);
    }
}

void bispo(int casas){
    if(casas > 0){
        printf("Cima\n");
        printf("Direita\n");    //declarando o valor do bispo.
        bispo(casas - 1);
    }
}

void rainha(int casas){
    if(casas > 0){                 //declarando o valor da rainha
        printf("Esquerda\n");
        rainha(casas - 1);
    }
}

int main(){
    int opcao, casas = 1;

    printf("***Bem Vindo ao Jogo de Xadrex***\n");
    printf("Qual peça deseja mover?\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Digite sua reposta: \n");
    scanf("%d", &opcao);

    //criando switch para reponder a escolha do jogaor.

    switch(opcao){
        case 1:
        printf("Voce escolheu a Torre!\n");
        torre(5);  //chamando o valor da torre 5 vezes.
        break;
        case 2:
        printf("Você escolheu o Bispo!\n");
        bispo(2); //chamando o valor do bispo 2 vezes.
        printf("Cima\n");
        break;
        case 3:
        printf("Você escolheu a Rainha!\n");
        rainha(8);  //chamando o valor da rainha 8 vezes.
        break;
        case 4:
        printf("Você escolheu o Cavalo!\n");
        do {
            for(casas = 1; casas <= 2; casas++){  //declarando que esta mensagem deverá ser impreesa 2 vezes.
                printf("Baixo\n");
            }
            printf("Esquerda\n");  //e essa deverá ser impressa apenas uma.
        } while (casas <= 1);
        break;
        default:
        printf("Opção invalida!\n");
        break;
    }

}

