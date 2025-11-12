#include <stdio.h>

/*
========================================================================
Concepts : struct + tableaux + pointeurs de structures
========================================================================
*/

// 1. Définis une énumération enum Classe pour représenter les classes d’un jeu : GUERRIER, MAGE, ARCHER, ASSASSIN


struct Etudiant {
    char nom[30];
    float notes[5];
};

float moyenne(const struct Etudiant *e);

void afficherEtudiant(const struct Etudiant *e);

int main(void) {
  // 3. Crée un tableau de 4 étudiants et initialise leurs notes (fixes ou via scanf).

  // 4. Parcours le tableau avec un pointeur (struct Etudiant *ptr = etudiants;) pour afficher les moyennes (Utilisation de ptr->notes[i])

  // 4 bis. Faire le point 4 mais à la place d'utiliser ptr->notes[i], utilisez plutôt ptr + 1

  return 0;
}

// 1. Ecrir une fonction float moyenne(const struct Etudiant *e) qui renvoie la moyenne.


// 2. Ecrir void afficherEtudiant(const struct Etudiant *e) pour tout afficher.


