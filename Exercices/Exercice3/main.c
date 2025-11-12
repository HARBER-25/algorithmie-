#include <stdio.h>

/*
========================================================================
Concepts : enum, struct imbriquée, passage par pointeur
========================================================================
*/

enum Direction { NORD, EST, SUD, OUEST };

struct Position {
    int x;
    int y;
};

struct Robot {
    char nom[20];
    struct Position pos;
    enum Direction dir;
};

void avancer(struct Robot *r);

void tournerDroite(struct Robot *r);

void afficherRobot(const struct Robot *r);

int main(void) {
  // 4. Fais parcourir au robot un carré complet (4 mouvements et 4 rotations).

  return 0;
}

// 1. Ecrir la fonction qui permet de déplace le robot selon sa direction.


// 2. Ecrir la focntion qui permet de change la direction du robot


// 3. Ecrir la fonction qui pemret d'afficher le nom, position, direction (en texte)


