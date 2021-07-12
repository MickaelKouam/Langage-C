/*
1. structure generale d'un programme c
2. variables simples
3. tableaux de type simple
*/

// declaration des fichiers pour utiliser les fonction printf et scanf
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
	printf("Vous avez entrer le char %c correspond au int %d \n", var_char, (int)var_char);

	// invitation a entrer une valeur byte
	printf("Entrer une valeur de type byte \n");
	scanf("%c", &var_byte);
	printf("Vous avez entrer le byte  %x  et int %d et char %c \n", (char)var_byte, (int)var_byte, var_byte);
	
	// invitation a entrer une valeur entiere
	printf("Entrer une valeur de type entiere\n");
	scanf("%d", &var_int);
	printf("Vous avez entrer l'entier %d et hexa %x et reel %f \n", var_int, var_int, (float)var_int);
	
	// invitation a entrer une valeur reelle
	printf("Entrer une valeur de type  reelle \n");
	scanf("%f", &var_float);
	// fomat reel, format 5 chiffre entier et 3 decimaux (pas resolu)
	printf("Vous avez entrer le reel %f et 5 chiffres entier et 3 decimaux  %8.3f \n", var_float, var_float);
	
}
