#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N;
int I, J;
int A[50][50];
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

    while(I<N){
       for(J=I;J<N;J++){
           if ( A[I][J] != A [J][I])
               printf(" La matrice n'est pas symétrique %d");
       }
       I++;
    }
    printf(" La matrice est symétrique");

}
