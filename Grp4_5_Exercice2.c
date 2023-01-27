/*
Écrire un programme qui prend en entrée un vecteur A de taille n et
retourne un vecteur B de taille n tel que B[i] = A[i] / norme_vecteur_A pour tout i
 compris entre 1 et n.
Tel-que : norme_vecteur_A =√∏ A[i]
*/

#include <stdio.h>
#include <math.h>
int main()
{   // declarations 2pts
    int n, somme = 0, prod = 1;
    int A[n] ;
    float R1, R2, B[n];

    printf("Donnez la taille du vecteur A:");
    scanf("%d", &n); //1pt

    // Remplissage de A
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]); // 2pts
        // calcule de somme ou produit 1pt
        somme += A[i]; // pour groupe 4
        prod *= A[i];  // pour groupe 5
    }
    R1 = sqrt(somme);
    R2 = sqrt(prod);

    // Remplissage de B pour le groupe 4
    for (int i = 0; i < n; i++)
    {
        B[i] = A[i] / R1; //3pts
    }
    // Affichage de B pour le groupe 4
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("B[%d] = %.2f |",i,B[i]);
    }

    // Remplissage de B pour le groupe 5
    for (int i = 0; i < n; i++)
    {
        B[i] = A[i] / R2;
    }
    // Affichage de B pour le groupe 4
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("B[%d] = %.2f |",i,B[i]);
    }
}
