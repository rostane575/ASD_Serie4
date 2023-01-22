#include <stdio.h>
#include <stdlib.h>
int main()
{
   int i,j,prod,som,N,M;
   int mat[50][50];
   printf("Donner le nombre de lignes de la matrice\n");
   scanf("%d", &N);
   printf("Donner le nombre de colonnes de la matrice\n");
   scanf("%d", &M);
   for(i=0;i<N;i++)
   {
       for(j=0;j<M;j++)
       {
           printf("Donner l’element Mat[%d][%d]",i,j);
           scanf("%7d",&mat[i][j]);
       }
   }
   printf("Matrice donnée :\n");
   for (i=0; i<N; i++)
    {
        for (j=0; j<M; j++)
        printf("%7d", mat[i][j]);
        printf("\n");
   }
   som = 0;
   prod = 1;
   for(som=0,i=0;i<N;i++)
   {
       for(j=0;j<M;j++)
       {
           som = som+mat[i][j] ;
           prod = prod*mat[i][j] ;
       }
   }
   printf("La somme =%d\n", som);
   printf("Le produit =%d\n", prod);
}
