#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,Val, occu, N, M;
    int mat[50][50];

    printf("Donner le nombre de lignes de la matrice\n");
    scanf("%d", &N);
    printf("Donner le nombre de colonnes de la matrice\n");
    scanf("%d", &M);
    printf("Donner la valeur recherchee\n");
    scanf("%d", &Val);
    for(i=0;i<N;i++)
   {
       occu = 0;
       for(j=0;j<M;j++)
       {
           printf("Donner l’element Mat[%d][%d]\n",i,j);
           scanf("%7d",&mat[i][j]);
          if(Val == mat[i][j])
            occu = occu+1 ;
       }
       printf("Le nombre d’occurrences a la ligne =%d\t", i);
       printf("est %d\n",occu);
   }
}
