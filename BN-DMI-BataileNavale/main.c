#include <stdio.h>
#include <windows.h>

#pragma execution_character_set("UTF-8")
void grille(){
    int tableau[10][10] = {
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 1, 1, 1, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            };
    printf(" X A B C D E F G H I J");// grille horizontale
    for (int x = 0; x < 10; x++) {
        printf("\n %d", x);// saut de ligne pour mettre l axe y


        for (int y = 0; y < 10; y++) {
            if(tableau[x][y]==0)
            {
                printf(" ~");
            }else if(tableau[x][y]==1){
                printf(" m");
            }

        }
    }


}
int main() {
    SetConsoleOutputCP(65001);
    int choice;

    printf("Bataille Navale\n");
    printf("Taper sur 1 pour démarrer une partie  ");
    scanf("%d", &choice);
    if (choice == 1) {

       grille();


    }
    printf("\nTaper sur 2 pour afficher l’aide");
    scanf("%d",&choice);
    if(choice==2){
        printf("La bataille navale oppose deux joueurs qui s'affrontent.\n");
        printf("Chacun a une flotte composée de 5 bateaux, qui sont, en général,\n");
        printf("les suivants : 1 porte-avion 1 croiseur (4 cases), 1 contre-torpilleur (3 cases),1 torpilleur (2 cases).\n");
        printf("Au début du jeu, chaque joueur place ses bateaux sur sa grille\n");
        printf("Un à un, les joueurs vont \"tirer\" sur une case de l'adversaire : par exemple, B.3 ou encore H.8.\n");
        printf("Le but est donc de couler les bateaux adverses.\n");
        printf("Au fur et à mesure, il faut mettre les pions sur sa propre grille afin de se souvenir de ses tirs passés.\n");

    }


    return 0;
}