#ifndef LO21_PROJET_LISTE_H
#define LO21_PROJET_LISTE_H


typedef unsigned char Bit;

typedef struct Chaine_de_bit {
    Bit bit;
    struct Chaine_de_bit *next;
} Chaine_de_bit;
typedef Chaine_de_bit *Listebit;

Listebit initialisation_liste_bits(int longIndiv);

Listebit initialisation_liste_bits_recursive(int longIndiv);


int valeur_lb(Listebit l);


/*
 * QualiteIndiv prend en parametre la valeur de l'individu est la taille de sa chaine
 * de bit. Elle calcule la qualité d'un individu, la qualité d'un individu est définie
 * par la fonction suivante : f1(x) = -X^2 où X = (x/2^longIndiv )* (B−A)+ A, A=−1, B=1.
 */
double qualite_lb(int valeur);

Listebit ajout_tete_bit(Listebit l, Bit new_value);

Listebit croise_lb(Listebit l1, Listebit l2);

int taille_liste_bit(Listebit l);

double qualite_manipulation(int valeur);


#endif //LO21_PROJET_LISTE_H
