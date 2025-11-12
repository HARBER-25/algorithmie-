#include <stdio.h>

/*
========================================================================
Concepts : struct imbriquée, enum, tableau de structures
========================================================================
*/

enum Statut { DISPONIBLE, EMPRUNTE };

struct Livre {
    char titre[50];
    char auteur[50];
    enum Statut statut;
};


int main(void) {
  // 1. Crée un tableau de 5 livres et initialise-les manuellement (disponible)

  // 4. Emprunte deux livres et affiche l’état du tableau avant/après

  return 0;
}

// 2. Écris la fonction et son prototype void emprunter(struct Livre *l) qui change le statut d’un livre


// 3. Écris la fonction et son prototype void afficherLivres(const struct Livre *tab, int n) pour afficher tout le catalogue


