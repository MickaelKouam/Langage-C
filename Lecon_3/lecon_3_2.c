#include <stdio.h>

int main(int argc, char *argv[])
{
    int taille, gabarit; 

    printf("Voici la description pour entrer votre gabarit \n");
    printf("1 = Petit gabarit homogène \n");
    printf("2 = Un peu mince \n");
    printf("3 = Mince \n");
    printf("4 = Il faut manger plus \n");
    printf("5 = Pataud \n");
    printf("6 = Moyen, mais proportionné \n");
    printf("7 = Normal \n");
    printf("8 = Un peu gros \n");
    printf("9 = Dans les normes \n");
    printf("Entrez votre gabarit (nombre compris entre 1 et 10 exclu) \n"); 
    scanf("%d", &gabarit);
    printf("Entrez a present votre taille \n");
    scanf("%d", &taille);

    // debut de traitement selon les conditions 
    if (gabarit <= 3 && taille <= 170){
        printf("Votre poids 1 est entre 50 et 60 Kg \n");
    }

    else if(gabarit == 4 && taille > 171){
        printf("Gabarit = %d\n", gabarit);
    	printf("Votre poids 2 est entre 50 et 60 Kg \n");
    }

    else if(gabarit >= 5 && gabarit < 7 && taille < 165){
    	printf("Votre poids est entre 61 et 75 Kg \n");
    }

    else if(gabarit == 7 && taille > 165){
        printf("Votre poids est entre 61 et 75 Kg \n");
    }
    else if(gabarit == 8 && taille < 180){
        printf("Votre poids est au dela de 90 Kg \n");
    }

    else{
    	printf("Autre cas \n");
    }

}

/*
Remarque: 
- se rappeler que pour faire un test d'egalite on utilise '==' et non '='
*/
