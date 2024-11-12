#include <stdio.h>

int somma(int a, int b)
{
    printf("\nLa somma %d + %d = %d\n", a, b, a + b);
    return (0);
}
int differenza(int a, int b)
{
    printf("\nLa differenza %d - %d = %d\n", a, b, a - b);
    return (0);
}
int moltiplicazione(int a, int b)
{
    printf("\nLa moltiplicazione %d * %d = %d\n", a, b, a * b);
    return (0);
}
float divisione(int a, int b)
{
    if (b == 0)
    {
        printf("non è possibile dividere per 0");
        return 0;
    }
    printf("\nLa divisione %d / %d = %1.2f\n", a, b, a / b);
    return (0);
}
float media(int a, int b)
{
    printf("\nLa media %d e %d = %1.2f\n", a, b, divisione(somma(a, b), 2));
    return (0);
}

int main()
{
    int a;
    int b;
    int esci;
    int scelta = 1;
    while (scelta != 0)
    {
        printf("\nInserisci primo numero= ");
        scanf("%d", &a);
        printf("\nInserisci secondo numero= ");
        scanf("%d", &b);
        esci=1;
        while (esci != 0)
        {
            printf("\n1=somma\n2=differenza\n3=moltiplicazione\n4=divisione\n5=media\n0=esci\n");
            scanf("%d", &scelta);
            switch (scelta)
            {
            case 0:
                esci = 0;
                break;
            case 1:
                somma(a, b);
                break;
            case 2:
                differenza(a, b);
                break;
            case 3:
                moltiplicazione(a, b);
                break;
            case 4:
                divisione(a, b);
                break;
            case 5:
                media(a, b);
                break;
            default:
                printf("\nInserisci un numero valido\n");
                break;
            }
            
        }
            printf("\n1=cambia numeri\n0=esci\n");
            scanf("%d", &scelta);
        if (scelta != 0 && scelta!= 1)
        {
            printf("\nInserisci numeri corretti\n");
            scelta=0;
        }
    }

    return 0;
}