#include <stdio.h>

int main(){
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; //aqui estão as letras que deverão ser exibidas na horizontal indicando as colunas do código.
    int tabuleiro[10][10] = {0}; //esta variável indica o tamanho do tabuleiro e  também vai preencher o tabuleiro com o número 0 representando a água.

     for (int i = 0; i < 3; i++) {      
        for (int j = 0; j < 10; j++) {           //impressão do cone 
            if (j >= 4 - i && j <= 4 + i) {
                tabuleiro[i][j] = 1;
            }
        }
    }

      
    for (int i = 7; i < 10; i++) {          
        for (int j = 7; j < 10; j++) {      //impressão da cruz
            if (i == 8 || j == 8) {    
                tabuleiro[i][j] = 2;
            }
        }
    }

    for (int i = 3; i < 6; i++){
        for (int j = 2; j < 7; j++){
            if ((i == 3 && j == 4) || (i == 4) || (i == 5 && j == 4)){    //impressão do octaedro.
                tabuleiro[i][j] = 3;
            }
        }
    }

    printf("***BATALHA NAVAL***\n");
    printf(" ");
    for(int j = 0;  j < 10; j++){        //impressão das letras.
        printf(" %c", letras[j]);
    } 
        printf("\n");
    
     for (int i = 0; i < 10; i++) {        //impressão do tabuleiro.
        printf("%d ", i + 1);  
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }


}


