#include <stdio.h>

/*
========================================================================
Concepts : struct + pointeurs + enum + fonctions
========================================================================
*/


enum TypeAttaque { PHYSIQUE, MAGIQUE };

struct Personnage {
    char nom[20];
    int vie;
    int attaque;
    enum TypeAttaque type;
};


int main(void) {
  // 3. Simule un duel tour par tour dans main() (2 personnages qui s’attaquent chacun leur tour jusqu’à ce qu’un meure)

  return 0;
}

/*
 1. void attaquer(struct Personnage *attaquant, struct Personnage *cible)
        - Si type == PHYSIQUE, enlève attaque points de vie.
        - Si MAGIQUE, enlève attaque / 2 mais ajoute +10 à l’attaquant.
 */


// 2. Ecrir la focntion et le prototype de void afficher(const struct Personnage *p)

=== Système de facturation ENSIM ===
1. Afficher la liste des produits
2. Afficher la liste des clients
3. Créer un devis
4. Créer une facture
5. Afficher toutes les factures
0. Quitter
