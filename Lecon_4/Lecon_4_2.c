#include <stdio.h>
#include <string.h>

// declaration de la structure
typedef struct Clients{
    char nom[50];
    char prenom[50];
    int id;
    int CA;
}t_client;

t_client client[30];
int dernierClient; 
int indexClient;

// ecrire des petites fonctions pour chaque cas du menu
void saisie_client();
void liste_alpha_clients();
void recherche_client();
void clients_par_CA();
void liste_client__sans_ordre();

 
int main( ) {


    int choix = 10;
    // presentation du menu
    
    // boucle do while (choix != 0)
    dernierClient = -1;
    indexClient = -1;
    do
    {

        printf("\n Faites un choix parmi les propositions suivantes \n");
        printf("--------- 0 : Sortie du programme ----------- \n");
        printf("--------- 1 : Saisie d’un client ----------- \n");
        printf("--------- 2 : Liste des clients par ordre alphabétique ----------- \n");
        printf("--------- 3 : Recherche d’un client par son nom et affichage de ses informations ----------- \n");
        printf("--------- 4 : Affichage des clients par ordre de chiffre d’affaire ----------- \n");
        printf("--------- 5 : Affichage des clients sans ordre ----------- \n");

        scanf("%d", &choix);

        switch (choix)
        {
        case 0:
            printf("A bientot ! \n");
            break;

        case 1:
            saisie_client();
            break;
        
        case 2:
            liste_alpha_clients();
            break;

        case 3:
            recherche_client();
            break;
        
        case 4:
            clients_par_CA();
            break;

        case 5:
            liste_client__sans_ordre();
            break;
        
        default:
            break;
        }
    } while (choix != 0);
        
    return 0;
}


void saisie_client(){
    // declarer un client qui appartient a la structure clients
    dernierClient += 1;
    printf("dernierClient = %d \n", dernierClient); // debug print just to help understand
    printf("Veuillez entrer le nom du client \n");
    scanf("%s", client[dernierClient].nom);
    printf("Veuillez entrer le prenom du client \n");
    scanf("%s", client[dernierClient].prenom);
    printf("Veuillez entrer l'identifiant du client \n");
    scanf("%d", &client[dernierClient].id);
    printf("Veuillez entrer le chiffre d'affaire du client \n");
    scanf("%d", &client[dernierClient].CA);
}

void liste_alpha_clients(){
    // chercher l'algo de classement par ordre alphabetique
    // printf("case 2 \n");
    printf("\ndernierClient =  %d\n", dernierClient);
    // utiliser la fonction de comparaison de deux chaines
    // char str1[] = "abcd", str2[] = "abcD", str3[] = "abcd";
    // int result;

    // // comparing strings str1 and str2
    // result = strcmp(str1, str2);
    // printf("strcmp(str1, str2) = %d\n", result);

    // // comparing strings str1 and str3
    // result = strcmp(str1, str3);
    // printf("strcmp(str1, str3) = %d\n", result);
    if (dernierClient < 0) printf("Pas de client a traiter \n");
    for (int i = 0; i <= dernierClient && dernierClient >= 0; ++i)
    {
        printf("\nNom du client %d est %s \n", i, client[i].nom);
        printf("Prenom du client %d est %s \n", i, client[i].prenom);
        printf("ID du client %d est %d \n", i, client[i].id);
        printf("CA du client %d est %d \n", i, client[i].CA);
    }
}

void recherche_client(){
    printf("case 3 \n");
}

void clients_par_CA(){
    printf("case 4 \n");
    int tmp;
    // probleme avec cette boucle a verifier plus calmement
    for (int i = 0; i <= dernierClient; ++i)
    {
        // int aCompare = client[i].CA;
        for (int j = 0; j <= dernierClient; ++j)
        {
            if (client[j].CA > client[j + 1].CA)
            {
                tmp = client[j].CA;
                client[j].CA = client[j + 1].CA;
                client[j + 1].CA = tmp;
            }
            // else continue;
        }
    }
    for (int i = 0; i <= dernierClient; ++i)
    {
        printf("CA client %d est %d \n", i, client[i].CA);
    }
}

void liste_client__sans_ordre(){
    
    for (int i = 0; i <= dernierClient; ++i){
        printf("Nom client = %s \n", client[i].nom);
        printf("Prenom client = %s \n", client[i].prenom);
        printf("ID client = %d \n", client[i].id);
        printf("CA client = %d \n", client[i].CA);
    }
    
}

/**
 * 
2) Faire un programme qui propose un menu (switch case) - structure
0 : Sortie du programme
1 : Saisie d’un client
2 : Liste des clients par ordre alphabétique
3 : Recherche d’un client par son nom et affichage de ses informations
4 : Affichage des clients par ordre de chiffre d’affaire
Un client est une structure avec :
nom (string)
prenom (string)
id (entier)
chiffre (entier)

La liste des clients est stockées dans un tableau de structure. Le programme boucle sur la saisie du choix
de menu, traite le choix, et recommence jusqu’au choix 0.
 **/
