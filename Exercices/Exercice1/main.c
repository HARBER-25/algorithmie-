#include <stdio.h>

/*
========================================================================
Concepts : struct, enum, passage par adresse, printf / scanf
========================================================================
*/


// 1. Définis une énumération enum Classe pour représenter les classes d’un jeu : GUERRIER, MAGE, ARCHER, ASSASSIN

enum Classe {GUERRIER, MAGE, ARCHER, ASSASSIN};

struct Joueur {
    char nom[30];
    int niveau;
    enum Classe classe;
    float pointsDeVie;
};

void afficherJoueur(const struct Joueur *j);


void monterNiveau(struct Joueur *j);

int main(void) {
    // 4. crée un tableau de 3 joueurs, initialise-les avec scanf et affiche-les après montée de niveau.
    char joueurs[3][4];
    scanf(joueurs);
    for (int i = 0, i =<4, i++) {
        for (int j = 0, j <=3, j++) {
            printf("Joueur \n", joueurs[j][i]);
            scanf();
        }
        for (int k = 0, k <=3, k++){
            printf("Niveau \n", joueurs[k][i]);
            scanf();
        }
        for (int a = 0, a <=3, a++){
            printf("Classe \n", joueurs[a][i]);
            scanf();
        }
        for (int b = 0, b <=3, b++){
            printf("Points de vie \n", joueurs[b][i]);
            scanf();
        }
    }
    return 0;
    }



// 2. Ecrir une fonction void afficherJoueur(const struct Joueur *j) qui affiche toutes ses infos.
void afficherJoueur(const struct Joueur *j) {
    printf("Nom du joueur \n", (*j).nom);
    printf("Niveau %d\n",j-> niveau);
    printf("Classe\n",(*j). classe);
    printf("Point de vie f.2f\n",(*j). pointsDeVie);
};

// 3. Ecrir Une fonction void monterNiveau(struct Joueur *j) qui augmente le niveau et les points de vie.
void monterNiveau(struct Joueur *j){
    (*j).niveau ++;
    (*j). pointsDeVie ++;
};

