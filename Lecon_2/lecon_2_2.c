// bibliotheque 
#include <stdio.h>

// menu principal
int main(int argc, char const *argv[])
{
	char maVar = 120;  // plage -128 à 127
	unsigned char maVar2 = 120;  // plage 0 à 255
	
	// boucle for
	for (int i = 120; i < 261; ++i)
	{
		printf("maVar = %c \n", maVar);  // recommence a afficher a partir de 256
		printf("maVar2 = %u\n", maVar2);  // %u is used to print unsigned char // affiche bien jusqu'a 255 puis reprends a 0
		maVar += 1;
		maVar2 += 1;
	}
}

/*
Note: 
- lorsque l'affichage de maVar se fait avec %c on ne voit pas bien comment une fois que 
la valeur a stocker depasse la plage on recommence a la plus petite valeur de la plage 
- lorsque l'on change l'affichage en %d on voit bien ce phenomene 
- De plus en utilisant %c, apres 127 on n'a pas d'affichage parce qu'aucune valeur 
negative n'est associee a un caractere, un nombre ou caractere special selon ASCII
*/