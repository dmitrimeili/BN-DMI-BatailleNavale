/*
 * Title: Bataille Navale
 * Author: Meili Dmitri
 * Date: 22.03.2019
 */

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
        {0, 2, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 4, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 4, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 4, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 4, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 3, 3, 3, 0, 0},
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

            switch (tableau[x][y]) {

                case 0:
                    tableau[x][y] == 0;
                    printf(" ~ %c", SVSB);// de l'eau
                    break;

                case 1:
                    tableau[x][y] == 1;
                    printf(" ~ %c", SVSB);// bateau 1*1
                    break;

                case 2:
                    tableau[x][y] == 2;
                    printf(" ~ %c", SVSB);// bateau 1*2
                    break;

                case 3:
                    tableau[x][y] == 3;
                    printf(" ~ %c", SVSB);// bateau 1*3
                    break;
                case 4:
                    tableau[x][y] == 4;
                    printf(" ~ %c", SVSB);// bateau 1*4
                    break;
                case 5:
                    tableau[x][y] == 5;// toucher couler
                    printf(" * %c", SVSB);
                    break;

                case 6:
                    tableau[x][y] == 6; // toucher
                    printf(" X %c", SVSB);
                    break;

                case 9:
                    tableau[x][y] == 9;
                    printf(" . %c", SVSB);// a l'eau
                    break;
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
    int scores = 0;
    SetConsoleOutputCP(65001);
    printf("Bataille Navale\n");
    printf(""
           ""
           ""
           "\"                                                                                                                                  _.\\n\"\n"
           "\"                                                                                                                            _.--\\\"' |\\n\"\n"
           "\"                                                                                                                      _.--\\\"'       |\\n\"\n"
           "\"                                                                                                                _.--\\\"'      _..,.  |\\n\"\n"
           "\"                                                                                                          _.--\\\"'            .==; '.|\\n\"\n"
           "\"                                                                                                    _.--\\\"'                     :   |'.\\n\"\n"
           "\"                                                                                              _.--\\\"'                            ;  |  '.\\n\"\n"
           "\"                                                                                        _.--\\\"'                                  :  |    '.\\n\"\n"
           "\"                                                                                  _.--\\\"'                                         ; |      '.\\n\"\n"
           "\"                                                                            _.--\\\"'                         _.                    : |        '.\\n\"\n"
           "\"                                                                      _.--\\\"'                              _.--^\\\"  :                   q I     --mmm--\\n\"\n"
           "\"                                                                _.--\\\"'                                   ;      _,.;_                 |_I____._\\\\___/___._.__\\n\"\n"
           "\"                                                          _.--\\\"'                                         :_.--^\\\"   :_]                |______|     ==\\\" \\\" \\\"_|'\\n\"\n"
           "\"                                                  |__.--\\\"'                                                  ;         ;|                |;I H| |_______'(|)|\\n\"\n"
           "\"                                              .   | :                                                           :     _   :|                |:I_H|_|______[ '._|    _.---.______\\n\"\n"
           "\"                                              I   | ;             ,    \\\\                    \\\\              ;__ [_]___;                |||____________| '_|    \\\\|   ;\\\"\\\"         |\\n\"\n"
           "\"                       ______.---._    ______ I  /|:        \\\\     ;\\\\    \\\\                    \\\\      ,d.-^'|| '-.b.     ___       L| I|  |\\\"  |   |_[_|_X__[|___:_,.-^>_.---.______ /|\\n\"\n"
           "\";                          \\\"\\\":\\\"|'|/    _\\\\--/  I_/_|;         \\\\    :/\\\\ __nm__                _nm   _d______||______b.__EEEE3       | I|__| m |___|__H_____|_ m__|'^|\\\"  \\\\|  ;  /|\\n\"\n"
           "\";      ______.---._<^-.,_____;___|]__\\\\|____|_|I___|] .--_____nm____; |_dHH|_|.-           |dHH|_|,-======''==_===;===|====|______|_I|__|_W_|___|__H_____^__W__|__|____|___:___,.--._nnn__m__//  _o\\n\"\n"
           "\":\\\\         \\\"\\\":   |/ \\\"|  |   __ m ___ .d88b. H m m || |_|-|-|-|-|-|-|  H*''|  .mmmmmmmmm^^\\\" '|m[]H\\\"m\\\"\\\"\\\"\\\"\\\"\\\"|   |_| []  [_]   /*  *  * * * * *|_|'\\\"7 |      * ;\\n\"\n"
           "\":_\\\\__,.,_n_m_;___|]_I|_[|__[__]W_____'Y88P'_H_W_W_||_|_|_|_|_|_|_|_|__H&[]|_____^MMMM^______|W__H$ &$__I_____ -'________.-'                | | /  |                                    ^(8)- \\n\"\n"
           "\"|<    H  * * *  * *  * *  *  * *  * * * * * * * *  *  *  *  *  *   *   *  *  *  *                                                                                       *  *  *   *  *       :\\n\"\n"
           "\"|  _|_H_|_                                           ___________________________________________________________________________________                                                    ;\\n\"\n"
           "\"'------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------'\"\n"
           "\"\"\n"
           "\"\"\n"
           "\"\"\n"
           "\"\"\n"
           "\n");

    SetConsoleOutputCP(65001);
    int test;
    while (test != 1) {
        printf("Taper sur 1 pour démarrer une partie  ");
        printf("\nTaper sur 2 pour afficher l’aide\n");
        printf("Taper sur 3 pour se logger\n");
        printf("Taper sur 4 pour s'inscrire\n");
        printf("Taper sur 5 pour quitter\n");


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
        if (choice == 3) {
            printf("Quel est votre nom d'utilisateur ?\n");

        }
        if (choice == 4) {
            printf("Comment voulez vous vous appeler ?\n");

        }
        if (choice == 5) {
            return 0;
        }
        if (choice == 1) {
            choice=0;
            printf("1. Si vous voulez la grille de base\n");
            printf("2. Si vous voulez une grille aléatoire\n");
            printf("3. Si vous voulez placer vous même les bateaux\n");
            scanf("%d",&choice);
            if (choice == 1) {
                SetConsoleOutputCP(437);
                char tir[5];
                int inputX;
                int inputY;
//Tirer sur les bateaux
                int hits[5] = {0, 0, 0, 0, 0};
                do {
                    SetConsoleOutputCP(437);
                    grille();
                    SetConsoleOutputCP(65001);
                    printf("Donner la case du tir:");
                    scanf("%s", &tir);
                    scores++;
                    int col = tir[0] - 65;
                    int row = tir[1] - 48;
                    while (col < 0 || col > 9 || row < 0 || row > 9) {

                        printf("\nCoordonnée invalide");
                        printf("\nDonner la case du tir:");
                        scanf("%s", &tir);

                        col = tir[0] - 65;
                        row = tir[1] - 48;
                    }
                    printf("Ligne %d, colonne %d : %d\n", row, col, tableau[row][col]);

                    int val = 0;
                    switch (tableau[row][col]) {
                        case 0:
                            printf("\na l'eau\n");
                            tableau[row][col] = 9;
                            break;
                        case 1:
                            val = 1;
                            hits[val]++;
                            printf("\ntouché coulé!\n");
                            tableau[row][col] = 5;
                            break;
                        case 2:
                            val = 2;
                            hits[val] = hits[val] + 1;
                            printf("\ntouché\n");
                            tableau[row][col] = 6;
                            if (hits[val] == 2) {
                                tableau[1][1] = 5;
                                tableau[1][2] = 5;
                                printf("coulé\n");

                            }

                            break;
                        case 3:
                            val = 3;
                            hits[val]++;
                            printf("\ntouché\n");
                            tableau[row][col] = 6;

                            if (hits[val] == 3) {
                                tableau[7][5] = 5;
                                tableau[7][6] = 5;
                                tableau[7][7] = 5;
                                printf("coulé\n");

                            }
                            break;
                        case 4:
                            val = 4;
                            hits[val]++;
                            printf("\ntouché\n");
                            tableau[row][col] = 6;
                            if (hits[val] == 4) {
                                tableau[2][8] = 5;
                                tableau[3][8] = 5;
                                tableau[4][8] = 5;
                                tableau[5][8] = 5;
                                printf("coulé\n");

                            }
                            break;


                        case 9:
                            printf("\ncretin\n");
                            break;
                    }


                } while (hits[1] != 1 || hits[2] != 2 || hits[3] != 3 || hits[4] != 4);
                SetConsoleOutputCP(437);
                grille();
                SetConsoleOutputCP(65001);
                printf("\n __     __  __              __                __                     \n"
                       "/  |   /  |/  |            /  |              /  |                    \n"
                       "$$ |   $$ |$$/   _______  _$$ |_     ______  $$/   ______    ______  \n"
                       "$$ |   $$ |/  | /       |/ $$   |   /      \\ /  | /      \\  /      \\ \n"
                       "$$  \\ /$$/ $$ |/$$$$$$$/ $$$$$$/   /$$$$$$  |$$ |/$$$$$$  |/$$$$$$  |\n"
                       " $$  /$$/  $$ |$$ |        $$ | __ $$ |  $$ |$$ |$$ |  $$/ $$    $$ |\n"
                       "  $$ $$/   $$ |$$ \\_____   $$ |/  |$$ \\__$$ |$$ |$$ |      $$$$$$$$/ \n"
                       "   $$$/    $$ |$$       |  $$  $$/ $$    $$/ $$ |$$ |      $$       |\n"
                       "    $/     $$/  $$$$$$$/    $$$$/   $$$$$$/  $$/ $$/        $$$$$$$/ \n"
                       "                                                                     \n"
                       "                                                                     \n"
                       "                                                                     ");
                printf("Vous avez tiré %d fois \n", scores);
            }
            if(choice==2){
                printf("cette fonctionalité n'a pas encore été développer\n");

            } if(choice==3) {
                printf("cette fonctionalité n'a pas encore été développer\n");

            }
        }

    }

    return 0;

}