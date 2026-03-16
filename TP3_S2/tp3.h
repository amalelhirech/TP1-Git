#ifndef BLIND_TEST
#define BLIND_TEST

typedef struct {
    char nom_fichier[100];
    char titre[100];
    char artiste[100];

}Song;

typedef struct {
    char nom[50];
    int score;
}Joueur;

typedef struct Liste_joueur{
    char nom[100];
    int meilleurScore;
    struct Liste_joueur * suivant;
} Liste_joueur;

int load_songs(char *filename, Song **songs);
void play_song_excerpt_at(const char *filename, int start, int seconds);
int string_equals_normalized(const char *a, const char *b);
void normalize_string(char *dest, const char *src);
void trim_newline(char *s);

void melanger_chanson(Song *songs, int count);

int convertir_score(char *s);

Liste_joueur * charger_scores(char *filename);

#endif