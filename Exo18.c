/*On considère une matrice carrée nxn de
nombres entiers. Écrire deux algorithmes ou
deux programmes C qui calculent la somme
des nombres de cette matrice dont la position
définit une structure de damier incluant le
premier élément en utilisant :
1. un parcours ligne par ligne pour le premier
algorithme;
2. un parcours en diagonal pour le deuxième
algorithme.
Les nombres a additionner sont ceux des
positions noires de ce damier.*/

#include <stdio.h>

int main()
{
    int n, somme;
    printf("On veut remplir une matrice carée de taille n*n. Donnez n:");
    scanf("%d", &n); // n=4 (damier)

    int T[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("T[%d][%d] = ", i, j);
            scanf("%d", &T[i][j]);
        }
    }

    // Calcule de la somme en utilisant un parcours ligne par ligne (cases noires)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0 && j % 2 == 0)
            {
                somme += T[i][j];
            }
            else if (i % 2 != 0 && j % 2 != 0)
            {
                somme += T[i][j];
            }
        }
    }

    printf("\nla somme est %d\n", somme);

    // Calcule de la somme en utilisan un parcours en diagonal
    somme = 0;

    for (int i = 0; i < n; i++)
    {
        somme += T[i][i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 2; j < n; j++)
        {
            somme += T[i][j];
            j++;
        }
    }
 
    int j=0;
    int k =2;

    int cpt = 0;
    do
    {
        for (int i = k; i < n; i++)
        {
            while (j <= i - k)
            {
                somme += T[i][j];
                j++;
            }
        }
            cpt++; j=0;k+=2;
    } while (cpt < n - 1);

    printf("\nla somme en utilisan un parcours en diagonal est %d\n", somme);
}
