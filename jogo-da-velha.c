#include <stdio.h>
#include <stdlib.h>
#define TAM 3
#define CORES_H

typedef struct velha{
    char l1[TAM];
    char l2[TAM];
    char l3[TAM];
}Velha;

int main(){
    Velha v;
    int val, c1, li1, c2, li2, repeat, cont;
    char j1[15];
    char j2[15];
    for(int i = 0; i<=2;i++){
        v.l1[i] = ' ';
        v.l2[i] = ' ';
        v.l3[i] = ' ';
    }
    val = 1;
    cont = 0;
    repeat = 1;
    printf("\33[1;33m");
    printf(" .......##..#######...######....#######.....########.....###... \n");
    printf(".......##.##.....##.##....##..##.....##....##.....##...##.##..\n");
    printf(".......##.##.....##.##........##.....##....##.....##..##...##. \n");
    printf(".......##.##.....##.##...####.##.....##....##.....##.##.....##\n");
    printf(".##....##.##.....##.##....##..##.....##....##.....##.#########\n");
    printf(".##....##.##.....##.##....##..##.....##....##.....##.##.....##\n");
    printf("..######...#######...######....#######.....########..##.....## \n");
    printf(".......##.....##.########.##.......##.....##....###............\n");
    printf(".......##.....##.##.......##.......##.....##...##.##...........\n");
    printf(".......##.....##.##.......##.......##.....##..##...##..........\n");
    printf(".......##.....##.######...##.......#########.##.....##.........\n");
    printf("........##...##..##.......##.......##.....##.#########.........\n");
    printf(".........##.##...##.......##.......##.....##.##.....##.........\n");
    printf("..........###....########.########.##.....##.##.....##.........\n");
    getchar();
    system("clear");
    printf("\33[1;32m");
    printf("Jogador 1 - DEFINA SEU NOME: ");
    scanf("%s", j1);
    printf("\33[1;34m");
    printf("\nJogador 2 - DEFINA SEU NOME: ");
    scanf("%s", j2);
    while (val == 1){
        while(repeat == 1){
            system("clear");
            printf("\33[1;33m");
            printf("            Colunas\n");
            printf("          1 |  2 |  3\n");
            printf("        ---------------\n");
            printf("Linha 1 | %c |  %c |  %c |", v.l1[0], v.l1[1], v.l1[2]);
            printf("\n        ---------------\n");
            printf("Linha 2 | %c |  %c |  %c |", v.l2[0], v.l2[1], v.l2[2]);
            printf("\n        ---------------\n");
            printf("Linha 3 | %c |  %c |  %c |", v.l3[0], v.l3[1], v.l3[2]);
            printf("\n        ---------------\n");
            printf("\33[1;32m");
            printf("\n--> %s \n", j1);
            printf("\nEscolha uma linha: ");
            scanf("%i", &li1);
            printf("\nEscolha uma coluna: ");
            scanf("%i", &c1);
            if(li1 == 1){
                if(v.l1[c1-1] == 'X' || v.l1[c1-1] == 'O'){
                    printf("\33[1;31m");
                    printf("\nJogada invalida!\n");
                    sleep(1);
                }
                else{
                    v.l1[c1-1] = 'X';
                    cont++;
                    repeat = 0;
                }
            }
            else if(li1 == 2){
                if(v.l2[c1-1] == 'X' || v.l2[c1-1] == 'O'){
                    printf("\33[1;31m");
                    printf("\nJogada invalida!\n");
                    sleep(1);
                }
                else{
                    v.l2[c1-1] = 'X';
                    cont++;
                    repeat = 0;
                }
            }
            else if(li1 == 3){
                if(v.l3[c1-1] == 'X' || v.l3[c1-1] == 'O'){
                    printf("\33[1;31m");
                    printf("\nJogada invalida!\n");
                    sleep(1);
                }
                else{
                     v.l3[c1-1] = 'X';
                     cont++;
                     repeat = 0;
                }
            }
            system("clear");
            printf("\33[1;33m");
            printf("            Colunas\n");
            printf("          1 |  2 |  3\n");
            printf("        ---------------\n");
            printf("Linha 1 | %c |  %c |  %c |", v.l1[0], v.l1[1], v.l1[2]);
            printf("\n        ---------------\n");
            printf("Linha 2 | %c |  %c |  %c |", v.l2[0], v.l2[1], v.l2[2]);
            printf("\n        ---------------\n");
            printf("Linha 3 | %c |  %c |  %c |", v.l3[0], v.l3[1], v.l3[2]);
            printf("\n        ---------------\n");
        }
            printf("\33[1;32m");
            if(v.l1[0] == 'X' && v.l1[1] == 'X' && v.l1[2] == 'X'){
                printf("\n--> %s venceu! <--\n", j1);
                val = 0;
                repeat = 1;
            }
            else if(v.l2[0] == 'X' && v.l2[1] == 'X' && v.l2[2] == 'X'){
                printf("\n--> %s venceu! <--\n", j1);
                val = 0;
                repeat = 1;
            }
            else if(v.l3[0] == 'X' && v.l3[1] == 'X' && v.l3[2] == 'X'){
                printf("\n--> %s venceu! <--\n", j1);
                val = 0;
                repeat = 1;
            }
            else if(v.l1[0] == 'X' && v.l2[1] == 'X' && v.l3[2] == 'X'){
                printf("\n--> %s venceu! <--\n", j1);
                val = 0;
                repeat = 1;
            }
            else if(v.l1[2] == 'X' && v.l2[1] == 'X' && v.l3[0] == 'X'){
                printf("\n--> %s venceu! <--\n", j1);
                val = 0;
                repeat = 1;
            }
            else{
                 for(int i = 0; i<=2;i++){
                    if(v.l1[i] == 'X' && v.l2[i] == 'X' && v.l3[i] == 'X'){
                        printf("\n--> %s venceu! <--\n", j1);
                        val = 0;
                        repeat = 1;
                    }
                }
            }
            if(cont == 9 && val != 0){
                printf("\33[1;31m");
                printf("\n--> Jogo empatou!\n");
                repeat = 1;
                val = 0;
            }

        while(repeat == 0){
            system("clear");
            printf("\33[1;33m");
            printf("            Colunas\n");
            printf("          1 |  2 |  3\n");
            printf("        ---------------\n");
            printf("Linha 1 | %c |  %c |  %c |", v.l1[0], v.l1[1], v.l1[2]);
            printf("\n        ---------------\n");
            printf("Linha 2 | %c |  %c |  %c |", v.l2[0], v.l2[1], v.l2[2]);
            printf("\n        ---------------\n");
            printf("Linha 3 | %c |  %c |  %c |", v.l3[0], v.l3[1], v.l3[2]);
            printf("\n        ---------------\n");
            printf("\33[1;34m");
            printf("\n--> %s \n", j2);
            printf("\nEscolha uma linha: ");
            scanf("%i", &li2);
            printf("\nEscolha uma coluna: ");
            scanf("%i", &c2);
            if(li2 == 1){
                if(v.l1[c2-1] == 'X' || v.l1[c2-1] == 'O'){
                    printf("\33[1;31m");
                    printf("\nJogada invalida!\n");
                    sleep(1);
                }
                else{
                    v.l1[c2-1] = 'O';
                    cont++;
                    repeat = 1;
                }
            }
            else if(li2 == 2){
                if(v.l2[c2-1] == 'X' || v.l2[c2-1] == 'O'){
                    printf("\33[1;31m");
                    printf("\nJogada invalida!\n");
                    sleep(1);
                }
                else{
                    v.l2[c2-1] = 'O';
                    cont++;
                    repeat = 1;
                }

            }
            else if(li2 == 3){
                if(v.l3[c2-1] == 'X' || v.l3[c2-1] == 'O'){
                    printf("\33[1;31m");
                    printf("\nJogada invalida!\n");
                    sleep(1);
                }
                else{
                    v.l3[c2-1] = 'O';
                    cont++;
                    repeat = 1;
                }
            }
            system("clear");
            printf("\33[1;33m");
            printf("            Colunas\n");
            printf("          1 |  2 |  3\n");
            printf("        ---------------\n");
            printf("Linha 1 | %c |  %c |  %c |", v.l1[0], v.l1[1], v.l1[2]);
            printf("\n        ---------------\n");
            printf("Linha 2 | %c |  %c |  %c |", v.l2[0], v.l2[1], v.l2[2]);
            printf("\n        ---------------\n");
            printf("Linha 3 | %c |  %c |  %c |", v.l3[0], v.l3[1], v.l3[2]);
            printf("\n        ---------------\n");
        }
        printf("\33[1;34m");

        if(v.l1[0] == 'O' && v.l1[1] == 'O' && v.l1[2] == 'O'){
            printf("\n--> %s venceu! <--\n", j2);
            val = 0;
            repeat = 0;
        }
        else if(v.l2[0] == 'O' && v.l2[1] == 'O' && v.l2[2] == 'O'){
            printf("\n--> %s venceu! <--\n", j2);
            val = 0;
            repeat = 0;
        }
        else if(v.l3[0] == 'O' && v.l3[1] == 'O' && v.l3[2] == 'O'){
            printf("\n--> %s venceu! <--\n", j2);
            val = 0;
            repeat = 0;
        }
        else if(v.l1[0] == 'O' && v.l2[1] == 'O' && v.l3[2] == 'O'){
            printf("\n--> %s venceu! <--\n", j2);
            val = 0;
            repeat = 0;
        }
        else if(v.l1[2] == 'O' && v.l2[1] == 'O' && v.l3[0] == 'O'){
            printf("\n--> %s venceu! <--\n", j2);
            val = 0;
            repeat = 0;
        }
        else{
             for(int i = 0; i<=2;i++){
                if(v.l1[i] == 'O' && v.l2[i] == 'O' && v.l3[i] == 'O'){
                   printf("\n--> %s venceu! <--\n", j2);
                    val = 0;
                    repeat = 0;
                }
            }
        }
    }
    printf("\33[0m");
}
