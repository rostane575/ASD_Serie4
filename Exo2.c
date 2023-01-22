#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,imax=1,jmax=1,max,N,M;
   int mat[50][50];

   printf("Donner le nombre de lignes de la matrice\n");
   scanf("%d", &N);
   printf("Donner le nombre de colonnes de la matrice\n");
   scanf("%d", &M);
   imax = i;
   jmax = j;
   for(i=0;i<N;i++)
   {
       for(j=0;j<M;j++)
       {
           printf("Donner l’element Mat[%d][%d]",i,j);
           scanf("%7d",&mat[i][j]);
           if(i==1 && j==1 || max<mat[i][j])
           {
               max = mat[i][j];
               imax = i;
               jmax = j;
           }
       }
   }
        printf("Le Max =%d\n", max,"il se trouve dans la case mat[%d",imax,"][%d",jmax,"]");
}
