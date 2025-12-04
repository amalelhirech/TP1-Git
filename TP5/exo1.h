#ifndef EXO1
#define EXO1

void afficher_menu();
int lire_choix();
void initialiser(int conso[7]);
void ajouterConsommation(int conso[7]);
void afficheResume(int conso[7]);
int charger(int conso[7]);
int sauvegarder(int conso[7]);
void utf8();
int humeurBonbons(int nb);
int humeurLegumes(int nb);
int humeurFruits(int nb);
void afficherBarre(int valeur, int max);
void afficherObjectifsEtScore(int objectifs[7], int conso[7]);
int scoreSante(int conso[7], int objectifs[7]);

#endif 