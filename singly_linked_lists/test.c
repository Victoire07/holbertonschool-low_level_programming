#include <stdio.h>
int main(void)
{
    float prixBillet = 42.5;
    int quantite = 3;
    float total = 42.5 * 3;

    printf("Tu as acheté %d billets à %.1f euros chacun.\n", quantite, prixBillet);
    printf("Le total à payer est de %.1f euros\n", total);

    return(0);
}

#include <stdio.h>
int main(void)
{
    float forfait = 19.99;
    float consoInternet = 8.50;
    float consoAppels = 4.25;
    float total = forfait + consoInternet + consoAppels;

    printf("Ton forfait est de %.2f euros.\n", forfait);
    printf("Tu as consommé %.2f euros d'internet et %.2f euros d'appels.\n", consoInternet, consoAppels);
    printf("Le montant total à payer est de %.2f euros.\n", total);

    return(0);
}

#include <stdio.h>
int main(void)
{
    int note = 12;

    if (note >= 10)
    {
        printf("Bravo tu as validé l'épreuve !\n");
    }
    else
    {
        printf("Tu devras repasser l'épreuve.\n");
    }

    return(0);
}

#include <stdio.h>
int main(void)
{
    int note = 17;
    if (note >= 16)
    {
        printf("Excellent travail !\n");
    }
    else if (note >= 14)
    {
        printf("Très bien !\n");
    }
    else if (note >= 12)
    {
        printf("Bien.\n");
    }
    else if (note >= 10)
    {
        printf("Tu passes de justesse.\n");
    }
    else
    {
        printf("Tu dois faire mieux la prochaine fois.\n");
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
    int noteMaths = 13;
    int noteFrancais = 11;
    float moyenne = (noteMaths + noteFrancais) / 2.0;

    if (moyenne >= 16)
    {
        printf("Mention Très Bien, félicitations !\n");
    }

    else if (moyenne >= 14)
    {
        printf("Mention Bien, beau travail.\n");
    }

    else if (moyenne >= 12)
    {
        printf("Mention Assez Bien, continue comme ça.\n");
    }

    else if (moyenne >= 10)
    {
        printf("Tu passes de justesse.\n");
    }

    else
    {
        printf("Tu dois redoubler d'efforts.\n");
    }

    return (0);
}

#include <stdio.h>
int main(void)

{
int i = 5;

while (i >= 1)
{
    printf("Décollage dans %d\n", i);
    i--;
}
printf("Décollage !\n");
return (0);
}

#include <stdio.h>
int main(void)
{
    int i = 1;
    while (i <= 10)
    {
        printf("Nombre : %d\n", i);
        i++;
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
    int i = 1;
    while (i <= 20)
    {
        if (i %3 == 0)
        {
            printf("%d : BOUM !\n", i);
        }
        else
        {
            printf("%d\n", i);
        }
        i++;
    }

    return (0);
}

#include <stdio.h>
int main(void)
{
    int i = 1;
    while(i <= 50)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return (0);
}

#include <stdio.h>
int main(void)

{
    int n = 7;
    int i = 1;

    while (i <= 10)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
    int i;

    for(i = 1; i < 11; i ++)
    {
        printf("%d\n", i);
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
    int n = 9;
    int i = 1;

    for(i = 1; i<=10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return(0);
}

#include <stdio.h>
int main(void)
{
    int ligne; 
    int colonne; 

    for(ligne = 1; ligne <= 5; ligne++)
    {
        for(colonne = 1; colonne <= ligne; colonne ++)
        {
            printf("*");
        }
        printf("\n");
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
    int ligne; 
    int colonne; 

    for(ligne = 5; ligne >= 1; ligne--)
    {
        for(colonne = 1; colonne <= ligne; colonne ++)
        {
            printf("*");
        }
        printf("\n");
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
int i;

for(i = 1; i<=50; i++)
{
    if (i % 5 == 0)
    {
        printf("%d : c'est un multiple de 5.\n", i);
    }
    else
    {
        printf("%d\n", i);
    }
}
    return(0);
}

#include <stdio.h>
int main(void)
{
    int i; 

    for(i = 1; i < 31; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FIZZBUZZ\n");
        }
        else if(i % 3 == 0)
        {
            printf("FIZZ\n");
        }
        else if(i % 5 == 0)
        {
            printf("BUZZ\n");
        }
        else
        {
            printf("%d\n");
        }
    }
    return(0);
}

#include <stdio.h>
void afficher_etoiles()
{
    printf("*****\n");
}

int main(void)
{
afficher_etoiles();
afficher_etoiles();
afficher_etoiles();

return(0);
}

#include <stdio.h>
void afficher_etoiles(int nb)
{
    int i; 
    
    for(i = 1; i <= nb; i++)
    {
        printf("*");
    }
    printf("\n");
}
int main(void)
{
    afficher_etoiles(3);
    afficher_etoiles(6);
    afficher_etoiles(1);
    
    return 0;
}

#include <stdio.h>

int carre(int x)
{
    return (x * x);
}

int main(void)
{
    int a = carre(3);
    int b = carre(5);
    int c = carre(10);

    printf("Le carré de 3 est %d\n", a);
    printf("Le carré de 5 est %d\n", b);
    printf("Le carré de 10 est %d\n", c);

    return 0;
}

#include <stdio.h>

int addition(int a, int b)
{
    return (a + b);
}
int main(void)
{
    printf("5 + 8 = %d\n", addition(5, 8));
    printf("12 + 6 = %d\n", addition(12, 6));
    printf("13 + 1 = %d\n", addition(13, 1));

    return(0);
}

#include <stdio.h>
int max(int a, int b)
{
    if(a > b)
    return a;

    else
    return b;
}
int main(void)
{
    printf("Le max entre 5 et 8 est : %d\n", max(5, 8));
    printf("Le max entre 6 et 9 est : %d\n", max(6, 9));

    return(0);
}

#include <stdio.h>
int est_pair(int n)
{
    if(n % 2 == 0)
    return (1);

    else
    return (0);
}
int main(void)
{
    if (est_pair(4))
    printf("4 est pair\n");
    else
    printf("4 est impair\n");

    if (est_pair(7))
    printf("7 est pair\n");
    else
    printf("7 est impair\n");

    if (est_pair(0))
    printf("0 est pair\n");
    else
    printf("0 est impair\n");

    return (0);
}

#include <stdio.h>
void table_complete(int max)
{
    int i;
    int j;
    int total;

    for(i = 1; i <= max; i++)
    {
        for(j = 1; j <= 10; j++)
        {
            total = i * j;
            printf("%d * %d = %d\n", i, j, total);
        }
    }
}
int main(void)
{
    table_complete(1);
    table_complete(2);
    table_complete(3);
    table_complete(4);
    table_complete(5);
    table_complete(6);
    table_complete(7);
    table_complete(8);
    table_complete(9);
    table_complete(10); 
    return (0);
}

#include <stdio.h>
void test_pointeur(void)
{
    int a =5;
    int *p = &a;

    printf("La valeur de a est : %d\n", a);
    printf("L'adresse de a est : %p\n", &a);
    printf("L'adresse contenue dans p est : %p\n", &a);
    printf("La valeur pointée par p est : %d\n", *p);
}
int main(void)
{
    test_pointeur();
    return 0;
}

#include <stdio.h>
void modifier_via_pointeur(void)
{
    int age = 20;
    int *p = &age;
    *p = 25;

    printf("La valeur initiale de age est : %d\n", age);
    *p = 25;
    printf("La nouvel valeur de age est : %d\n", age);
}

int main(void)
{
    modifier_via_pointeur();
    return 0;
}

#include <stdio.h>

void afficher_tableau(void)
{
    int i;
    int nombres[5] = {3, 6, 9, 12, 15};

    for(i = 0; i <5; i++)
    printf("%d\n", nombres[i]);
}

int main(void)
{
    afficher_tableau();
    return (0);
}

#include <stdio.h>
void afficher_prenom(void)
{
    char prenom[] = "Victoire";
    int i = 0;

    while (prenom[i] != '\0')
    {
        printf("%c\n", prenom[i]);
        i++;
    }
}

int main(void)
{
    afficher_prenom();
    return(0);
}

#include <stdio.h>

void compter_lettres(void)
{
    char mot[] = "Victoire";
    int i = 0;
    int compteur = 0;

    while (mot[i] != '\0')
    {
        compteur++;
        i++;
    }

    printf("Le nombre de lettres est : %d\n", compteur);
}

int main(void)
{
    compter_lettres();
    return (0);
}

#include <stdio.h>
void afficher_lettres(void)
{
    char nom[] = "Luminou";
    int i = 0;

    while (nom[i] != '\0')
    printf("%c\n", nom[i]);
}

int main(void)
{
    afficher_lettres();
    return(0);
}

#include <stdio.h>
void compter_lettres(void)
{
    char nom[] = "Luminou";
    int i = 0;
    int compteur = 0;

    while (nom[i] != '\0')
    {
        compteur++;
        i++;
    }

    printf("Le mot contient %d lettres.\n", compteur);
}

int main(void)
{
    compter_lettres();
    return (0);
}

