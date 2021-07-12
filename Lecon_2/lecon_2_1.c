// bibliotheque 
#include <stdio.h>

// menu principal
int main(int argc, char const *argv[])
{
	char maVar = 120;  // plage -128 à 127
	unsigned char maVar2 = 120; // plage 0 à 255
	
	// boucle for
	for (int i = 120; i < 133; ++i)
	{
		printf("maVar = %c \n", maVar); // devrait afficher normalement jusqu'a 127 puis afficher 0 apres ca
		printf("maVar2 = %u\n", maVar2);  // %u is used to print unsigned char // devrait tout afficher normalement
		maVar += 1;
		maVar2 += 1;
	}
}

// Note: lorsque maVar = 127 on affiche le caractere d'espacement