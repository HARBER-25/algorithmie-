#include <stdio.h>

/*
========================================================================
Concepts : struct, enum, passage par adresse, printf / scanf
========================================================================
*/


// 1. Définis une énumération enum Classe pour représenter les classes d’un jeu : GUERRIER, MAGE, ARCHER, ASSASSIN


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

  return 0;
}

// 2. Ecrir une fonction void afficherJoueur(const struct Joueur *j) qui affiche toutes ses infos.


// 3. Ecrir Une fonction void monterNiveau(struct Joueur *j) qui augmente le niveau et les points de vie.


