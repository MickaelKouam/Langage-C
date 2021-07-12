#include <stdio.h>

int main(int argc, char *argv[])
{
    int dividende = 0, diviseur = 10, quotient = 0, reste = 0; 


    printf("Entrez votre nombre \n");
    scanf("%d", &dividende);

    
    // programme milliers, centaines, dizaines, unités
    // prendre le nombre et le diviser successivement par 10 pour decider 

    /*
    source pour le noms des differentes unites puissance de 10
    https://www.alloprof.qc.ca/fr/eleves/bv/mathematiques/les-positions-et-les-valeurs-des-nombres-m1017
    */
   
    if (dividende < diviseur)
    {
        printf("Votre nombre compte %d unites \n", dividende);
    }
    else{
        quotient = dividende / diviseur;
        reste    = dividende % diviseur;
        if (quotient >= diviseur)
        {
            int newQuotient = 0, newReste = 0;
            newQuotient = quotient / diviseur;
            newReste = quotient % diviseur;
            if (newQuotient >= diviseur)
            {
                int newQuotient2 = 0, newReste2 = 0;
                newQuotient2 = newQuotient / diviseur;
                newReste2 = newQuotient % diviseur;
                if (newQuotient2 >= diviseur)
                {
                    int newQuotient3 = 0, newReste3 = 0;
                    newQuotient3 = newQuotient2 / diviseur;
                    newReste3 = newQuotient2 % diviseur;
                    if (newQuotient3 >= diviseur)
                    {
                        int newQuotient4 = 0, newReste4 = 0;
                        newQuotient4 = newQuotient3 / diviseur;
                        newReste4 = newQuotient3 % diviseur;
                        if (newQuotient4 >= diviseur)
                        {
                            int newQuotient5 = 0, newReste5 = 0;
                            newQuotient5 = newQuotient4 / diviseur;
                            newReste5 = newQuotient4 % diviseur;
                            printf("Votre nombre compte %d unites %d dizaines %d centaines %d unite de milliers %d dizaines de milliers %d centaines de milliers %d millions \n", reste, newReste, newReste2, newReste3, newReste4, newReste5, newQuotient5);
                        }
                        else{
                            printf("Votre nombre compte %d unites %d dizaines %d centaines %d unite de milliers %d dizaines de milliers %d centaines de milliers \n", reste, newReste, newReste2, newReste3, newReste4, newQuotient4);
                        }
                        
                    }
                    else{
                        printf("Votre nombre compte %d unites %d dizaines %d centaines %d unite de milliers %d dizaines de milliers \n", reste, newReste, newReste2, newReste3, newQuotient3);
                    }
                }
                else{
                    printf("Votre nombre compte %d unites %d dizaines %d centaines %d unite de milliers \n", reste, newReste, newReste2, newQuotient2);
                }
            }
            else{
                printf("Votre nombre compte %d unites %d dizaines %d centaines \n", reste, newReste, newQuotient);
            }

        }
        else{
            printf("Votre nombre compte %d unites %d dizaines \n", reste, quotient);
        }
    }

}

/*
Remarque: lorsque le premier quotient est superieur ou egal a 10
je constate que le traitement qui suit reste le meme seule les noms 
des variables changent et l'affichage ausi

Note: Je pensais a une boucle pour automatiser cette tache pour 
automatiser ce traitement qui se repete (peut-etre ecrire une fonction traitement
qui se chargera uniquement de faire les traitement)
*/
