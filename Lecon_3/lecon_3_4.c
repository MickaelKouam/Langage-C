#include <stdio.h>

// algorithme de tri bubble sort

int main(int argc, char *argv[])
{
    
    int tailleTab = 0, valeurTab;
    int tmp;

    printf("Entrer la taille de votre tableau \n"); 
    scanf("%d", &tailleTab);

    int tableauEntier[tailleTab];

    for (int i = 0; i < tailleTab; ++i)
    {
        // remplissage valeur tableau 
        printf("Entrez la valeur %d du tableau \n", i);
        scanf("%d", &valeurTab);
        tableauEntier[i] = valeurTab;
    }

    for (int j = 0; j < tailleTab; j++)
    {
        for (int i = 0; i < tailleTab; ++i)
        {
            // printf("Contenu du tableau %d vaut %d \n", i, *(tableauEntier + i));
            if (i < tailleTab-1)
            {
                // printf("Valeur suivante de %d vaut %d \n", i, *(tableauEntier + (i+1)));
                if (*(tableauEntier + i) > *(tableauEntier + (i+1)))
                {
                    // printf("La valeur precedente %d est inferieure a la suivante %d \n", i, i+1);
                    tmp = tableauEntier[i];
                    tableauEntier[i] = tableauEntier[i+1];
                    tableauEntier[i+1] = tmp;
                    // printf("Nouvelle valeur de i = %d et i+1 = %d \n",*(tableauEntier + i), *(tableauEntier + (i+1)));

                }
            }
            
        }
    }
    
    printf("=========== Contenu ordonne du tableau ===========\n");
    for (int i = 0; i < tailleTab; ++i)
    {
        printf("Contenu du tableau %d vaut %d \n", i, *(tableauEntier + i));
    }
    
}


/*
Remarque: 
- Faire attention a la manipulation du tableau
- remaquer bien la position de i + 1 pour acceder a la valeur suivante du tableau
- se souvenir qu'un tableau est aussi un pointeur
*/
