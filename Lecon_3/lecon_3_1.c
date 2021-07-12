#include <stdio.h>

int main(int argc, char *argv[])
{
    int taille, poids; 

    printf("Entrez votre taille en entier selon 1,60 m = 160 \n"); 
    scanf("%d", &taille);
    printf("Entrez a present votre poids \n");
    scanf("%d", &poids);

    // debut de traitement selon les conditions 
    if (poids > 50 && poids < 60)
    {
    	if (taille > 140 && taille < 150) {
    		printf("Petit garit homogene\n");
    	}
    	else if(taille > 150 && taille < 160){
    		printf("Un peu mince \n");
    	}
    	else if(taille > 160 && taille < 170){
    		printf("Mince \n");
    	}
    	else if(taille > 171){
    		printf("Il faut manger plus \n");
    	}
    }

    else if(poids > 60 && poids < 65)
    {
    	if(taille > 140 && taille < 150){
    		printf("Pataud \n");
    	}
    	else if(taille > 150 && taille < 165){
    		printf("Moyen, mais proportionne \n");
    	}
    	else if(taille > 165){
    		printf("Normal \n");
    	}

    }

    else if(poids > 90 && taille < 180){
    	printf("Un peu gros \n");
    }

    else{
    	printf("Dans les normes \n");
    }

}
