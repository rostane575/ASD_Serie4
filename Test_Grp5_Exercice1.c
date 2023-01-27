/*Écrire un programme ou un algorithme qui permet de calculer la somme
a payer de N articles achetés par un client. Le prix de chaque article
est saisie par l'utilisateur. Compléter ensuite le programme pour qu'il affiche le prix
moyen des articles achetés, le prix le moins chers et le plus chers.*/

#include <stdio.h>

int main()
{
    int N; 
    float prix, somme = 0., moy, min, max;

    printf("Donnez le nombre d'articles:");
    scanf("%d", &N); // 1pt

    for (int i = 0; i < N; i++)
    {
        printf("Donnez le prix de l'article numero %d: ", i);
        scanf("%f", &prix);//1pt
        if (i == 0 || min > prix) //1pt
        {
            min = prix;//1pt
        }
        if (i == 0 || max < prix)//1pt
        {
            max = prix;//1pt
        }
        somme += prix;//1pt
    }

    printf("Le prix le moins chers est %.2f DA.\n", min); //0.5pt
    printf("Le prix le plus chers est %.2f DA.\n", max);//0.5pt
    printf("Le prix le moy est %.2f DA.\n", somme / N); //1pt
}
