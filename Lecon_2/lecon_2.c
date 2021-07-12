#include <stdio.h>

int main(int argc, char *argv[])
{
    int               entier; // plage : -2 147 483 648 a 2 147 483 647
	double            reel; // plage 1.7*10^(-308) à 1.7*10^308 (float)
	int               puiss;  // declarer mais pas utilise
    short             petit; // plage -32 768 a 32 767 
    unsigned short    upetit; // plage 0 à 65 535

	entier = 4 + 230000 - 7800;  // ok, on a le + et le - en C
	entier = entier * 2;
	entier = entier / 3;         // expliquer le résultat
    printf("entier = %d\n",entier);  // ne va afficher que la partie entiere du resultat

	reel = 4 + 230000 - 7800;   // meme chose sur des reels
	reel = reel * 2;
	reel = reel / 3;            // expliquer le résultat
    printf("reel = %f\n",reel);  // Va afficher le resultat sous forme d'un float avec la partie decimale

    petit = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2;
	printf("petit cas 1 = %d\n",petit); // affichage normale de la valeur
	petit *= 2;
	printf("petit cas 2 = %d\n",petit); // resultat espere 32768 mais comme short s'arrete a 32767 on stocke a la case suivante -32768
	petit *= 2;
	printf("petit cas 3 = %d\n",petit); // resultat espere 65536 mais comme ce n'est pas dans la plage affichage = 0,
	                                    // ne veut pas dire que petit ici vaut 0 juste defaut d'affichage

    upetit = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2; // 2^14
	printf("upetit cas 1 = %u\n",upetit); // %u utilise pour afficher les entier non signe // valeur normale
	upetit *= 2;
	printf("upetit cas 2 = %u\n",upetit);  // valeur normale 32768
	upetit *= 2;
	printf("upetit cas 3 = %u\n",upetit);  // valeur normale 65536 mais valeur affichee = 0 puis cette valeur est hors de la plage acceptee

    /****** on revient a des valeurs décentes pour petit */
	petit /= 2; upetit /= 2;  // derniere valeur en memoire de petit = 0, upetit = 0
	printf("petit cas 4 = %d, upetit cas 4 = %u\n",petit,upetit); // petit = 0, upetit = 0
	petit /= 2; upetit /= 2;
	printf("petit cas 5 = %d, upetit cas 5 = %u\n",petit,upetit);  // petit = 0, upetit = 0
}

/*
Remarque: 
- si on change le type des variables petit et upetit,
les affichages des cas 4 et 5 ne seront pas les memes
*/
