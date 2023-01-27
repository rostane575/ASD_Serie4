/*Soit N valeurs entières. Écrire un programme ou un algorithme qui compte
 le nombre de valeurs divisibles par une valeur val donnée supposés positive
  et calcule leurs moyenne(ne pas utiliser un vecteur).*/

#include <stdio.h>

int main()
{
    int N, val, cpt = 0, x; // 1pt
    float moy = 0;

    printf("Donnez N:");
    scanf("%d", &N); // 1pt

    printf("Donnez val:");
    scanf("%d", &val); // 1pt

    for (int i = 0; i < N; i++)
    {
        printf("Donnez un nombre x: ");
        scanf("%d", &x);  // 1pt
        if ((x % val) == 0) // 1pt
        {
            cpt++;    // 1pt
            moy += x; // 1pt
        }
    }

    printf("Le nombre de valeurs divisibles par %d est %d valeurs\n", val, cpt); // 1pt
    printf("La moyenne des %d nombres est %f\n", cpt, moy / cpt);                // 1pt
}
