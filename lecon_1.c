/*
1. structure generale d'un programme c
2. variables simples
3. tableaux de type simple
*/

// declaration des biliotheques pour utiliser les fonctions printf et scanf
#include<stdio.h>

// declaration des variables
char var_char, var_byte;
int var_int;
float var_float;
char chaine[20];

//programme principal
void main()
{
	// invitation a entrer une valeur char
	printf("Entrer une valeur de type char \n");
	scanf("%c", &var_char);
	printf("Vous avez entrer le char %c \n", var_char);

	// invitation a entrer une valeur byte
	printf("Entrer une valeur de type byte \n");
	scanf("%x", &var_byte);
	printf("Vous avez entrer le byte  %x \n", var_byte);
	
	// invitation a entrer une valeur entiere
	printf("Entrer une valeur de type entiere\n");
	scanf("%d", &var_int);
	printf("Vous avez entrer l'entier %d \n", var_int);
	
	// invitation a entrer une valeur reelle
	printf("Entrer une valeur de type  reelle \n");
	scanf("%f", &var_float);
	printf("Vous avez entrer le reel %f \n", var_float);
	
	// invitation a entrer une valeur chaine de caractere
	printf("Entrer une valeur de type chaine de caractere \n");
	scanf("%s", chaine);
	printf("Vous avez entrer la chaine %s \n", chaine);

}


// solution alternative avec choix de l'operation a faire

