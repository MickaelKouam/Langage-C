// bibliotheque 
#include <stdio.h>

// menu principal
int main(int argc, char const *argv[])
{
	int quotient, reste, dividende, diviseur;
	
	printf("Entrer un entier pour le dividende \n");
	scanf("%d", &dividende);  // sans le & devant la variable la compilation genere une erreur de segmentation
	printf("Entrer un entier pour le diviseur \n");
	scanf("%d", &diviseur);  // erreur de segmentation aussi sans le & devant la variable

	// traitement
	quotient = dividende / diviseur;
	reste = dividende % diviseur;

	printf("Le quotient vaut %d \n", quotient);
	printf("Le reste vaut %d \n", reste);
	
}