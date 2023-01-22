#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,Val, occu, N, M;
    int mat[50][50],t[50];

    printf("Donner le nombre de lignes de la matrice\n");
    scanf("%d", &N);
    printf("Donner le nombre de colonnes de la matrice\n");
    scanf("%d", &M);
    printf("Donner la valeur recherchee\n");
    scanf("%d", &Val);
    for(i=0;i<N;i++)
   {
       t[i] = 0;
       for(j=0;j<M;j++)
       {
           printf("Donner l’element Mat[%d][%d]",i,j);
           scanf("%7d",&mat[i][j]);
          if(Val == mat[i][j])
            t[i] = t[i]+1 ;
       }
   }
   for(i=0;i<N;i++)
   {
         printf("Le nombre d’occurrences a la ligne =%d\n", i);
       printf("est %d",t[i]);
   }
}
