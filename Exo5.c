#include <stdio.h>
#include <stdlib.h>

main()
{
/* Déclarations */
int A[50][50]; /* matrice carrée */
int N; /* dimension de la matrice carrée */
int I, J; /* indices courants */

/* Saisie des données */
printf("Dimension de la matrice carrée (max.50) : ");
scanf("%d", &N);
for (I=0; I<N; I++)
for (J=0; J<N; J++)
{
printf("Elément[%d][%d] : ",I,J);
scanf("%d", &A[I][J]);
}
/* Affichage de la matrice */
printf("Matrice donnée :\n");
for (I=0; I<N; I++)
{
for (J=0; J<N; J++)
printf("%7d", A[I][J]);
printf("\n");
}
/* Mise à zéro de la diagonale principale */
for (I=0; I<N; I++)
A[I][I]=0;
/* Edition du résultat */
printf("Matrice résultat :\n");
for (I=0; I<N; I++)
{
for (J=0; J<N; J++)
printf("%7d", A[I][J]);
printf("\n");
}
return 0;
}
