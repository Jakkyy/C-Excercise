#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {

    //ESERCIZIO 5.3

    
    char source[MAX];
    char target[MAX];
    int trovata = 0;

    int cont;
    int i;
    int j = 0;


    printf("Inserisci la frase --> ");
    scanf("%s", &source);

    printf("Inserisci ora quello che vuoi cercare all'interno della stringa '%s' --> ", source);
    scanf("%s", &target);


    for (cont = 0; source[cont] != "\0" && trovata == 0; cont++)
    {
        i = cont;

        while (target[j] == source[i])
        {
            i++;
            j++;

            if (j == strlen(target))
            {
                trovata = 1;
            }

        }
        j = 0;
    }

    if (trovata == 1)
    {
        printf("%s e' presente nella frase", target);
    }
    else
    {
        printf("%s non e' presente nella frase");
    }
    


    //ESERCIZIO 5.4

    int cont, i;


    char frase1[MAX];
    char frase2[MAX];


    printf("Scrivi la prima parola --> ");
    scanf("%s", frase1);



    printf("Scrivi la seconda parola --> ");
    scanf("%s", frase2);

    char conc[MAX];

    for (cont = 0; frase1[cont] != '\0'; cont++)
    {
        conc[cont] = frase1[cont];
    }

    for (i = 0; frase2[i] != '\0'; i++)
    {
        conc[cont] = frase2[i];
        i++;
    }

    printf("concatenazione delle due parole ---> %s", conc);
}
