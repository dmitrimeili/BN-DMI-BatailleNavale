#include <stdio.h>
#include <windows.h>

#define STLC 218 // ┌, Single Top Left Corner
#define STRC 191 // ┐, Single Top Right Corner
#define SBLC 192 // └, Single Bottom Left Corner
#define SBRC 217 // ┘, Single Bottom Right Corner
#define SVSB 179 // │, Single Vertical Simple Border
#define SVRB 180 // ┤, Single Vertical Right Border
#define SVLB 195 // ├, Single Vertical Left Border
#define SHSB 196 // ─, Single Horizontal Simple Border
#define SHBB 193 // ┴, Single Horizontal Bottom Border
#define SHTB 194 // ┬, Single Horizontal Top Border
#define SC   197 // ┼, Single Center
#define DTLC 201 // ╔, Double Top Left Corner
#define DTRC 187 // ╗, Double Top Right Corner
#define DBLC 200 // ╚, Double Bottom Left Corner
#define DBRC 188 // ╝, Double Bottom Right Corner
#define DVSB 186 // ║, Double Vertical Simple Border
#define DVRB 185 // ╣, Double Vertical Right Border
#define DVLB 204 // ╠, Double Vertical Left Border
#define DHSB 205 // ═, Double Horizontal Simple Border
#define DHBB 202 // ╩, Double Horizontal Bottom Border
#define DHTB 203 // ╦, Double Horizontal Top Border
#define DC   206 // ╬, Double Center


int tableau[10][10] = {
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
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
#pragma execution_character_set("UTF-8")

void hautgrille() {//grille en haut
    printf("  %c", STLC);
    for (int grillehaut = 0; grillehaut < 9; grillehaut++) {
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SHTB);
    }
    printf("%c%c%c%c", SHSB, SHSB, SHSB, STRC);
}

void basgrille() {//grille en bas
    printf("  %c", SBLC);
    for (int grillehaut = 0; grillehaut < 9; grillehaut++) {
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SHBB);
    }
    printf("%c%c%c%c", SHSB, SHSB, SHSB, SBRC);
}

void milieugrille() {
    printf("%c", SVLB);
    for (int i = 0; i < 9; i++) {
        printf("%c%c%c%c", SHSB, SHSB, SHSB, SC);
    }
    printf("%c%c%c%c", SHSB, SHSB, SHSB, SVRB);
}

void grille() {

    printf(" X  A   B   C   D   E   F   G   H   I   J\n");// grille horizontale
    hautgrille();
    for (int x = 0; x < 10; x++) {

        printf("\n %d", x);// saut de ligne pour mettre l axe y



        printf("%c", SVSB);

        for (int y = 0; y < 10; y++) {

            if (tableau[x][y] == 0) {


                printf(" ~ %c", SVSB);


            } else if (tableau[x][y] == 1) {
                printf(" m %c", SVSB);

            } else if (tableau[x][y] == 2) {
                printf(" X %c", SVSB);
            }

        }
        if (x <= 8) {
            printf("\n  ");
            milieugrille();

        } else if (x == 9) {
            printf("");
        }


    }

    printf("\n");
    basgrille();


}

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleOutputCP(437);
    int choice;

    SetConsoleOutputCP(65001);
    printf("Bataille Navale\n");

    SetConsoleOutputCP(65001);

    printf("Taper sur 1 pour démarrer une partie  ");
    scanf("%d", &choice);
    if (choice == 1) {
        SetConsoleOutputCP(437);
        grille();


    }
    SetConsoleOutputCP(65001);
    printf("\nTaper sur 2 pour afficher l’aide");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("La bataille navale oppose deux joueurs qui s'affrontent.\n");
        printf("Chacun a une flotte composée de 3 bateaux, qui sont, en général,\n");
        printf("les suivants : 1 porte-avion 1 croiseur (4 cases), 1 contre-torpilleur (3 cases),1 torpilleur (2 cases).\n");
        printf("Au début du jeu, chaque joueur place ses bateaux sur sa grille\n");
        printf("Un à un, les joueurs vont \"tirer\" sur une case de l'adversaire : par exemple, B.3 ou encore H.8.\n");
        printf("Le but est donc de couler les bateaux adverses.\n");
        printf("Au fur et à mesure, il faut mettre les pions sur sa propre grille afin de se souvenir de ses tirs passés.\n\n");

    }
    char tir[5];
    int inputX;
    int inputY;
//Tirer sur les bateaux
    printf("Donner la case du tir:");
    scanf("%s", &tir);

    int col = tir[0] - 65;
    int row = tir[1] - 49;
    while (col < 0 || col > 9 || row < 0 || row > 9) {
        printf("\nCoordonnée invalide");
        printf("\nDonner la case du tir:");
        scanf("%s", &tir);
        col = tir[0] - 65;
        row = tir[1] - 49;
    }
    printf("Ligne %d, colonne %d\n", row, col);

    if (col == 0 && row == 0) {
        tableau[0][0] = 2;
    }
    SetConsoleOutputCP(437);
    grille();
    printf("touché");

    // petit bateau


    getchar();
    getchar();

    return 0;
}