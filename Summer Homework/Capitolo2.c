#include <stdio.h>

int main() 
{

	/******************/
	/*                */
	/*   CAPITOLO 2   */
	/*                */
	/******************/


	//ESERCIZIO 2.01

	//Si consideri il seguente frammento di codice :
	int a[100];
	int i;

	for (i = 0; i < 500; i++)
		a[i] = 0;

	//Quale errore è stato introdotto ? Motivare brevemente la risposta.
	//Nel for viene specificata la condizione di i < 500, però l'array a ha 100 "spazi" questo vuol dire che il programma assegna a degli "spazi" inesistenti il valore di 0



	//ESERCIZIO 2.02



	/*
		Si consideri la seguente dichiarazione di matrice 3x3:

		int m[3][3];
		Si scriva il frammento di programma C necessario per assegnare valore zero a tutti gli elementi della MATRICE.
	*/
	int m[3][3];
	int j, k;

	for (j = 0; j < 3; j++)
	{
		for (k = 0; k < 3; k++)
		{
			m[j][k] = 0;
			printf("%d", m[j][k]);
		}
	}



	//ESERCIZIO 2.05

	int in, fin;
	char parola[100];
	//int i = 0;
	int cont;

	printf("Inserisci il primo carattere della parola");
	scanf_s("%c", &parola[i]);

	while (parola[i] != "#")
	{
		i++;
		printf("Inserisci il %d* carattere della parola per terminare di scrivere inserire il carattere #");
		scanf_s("%c", &parola[i]);
	}

	in = 0, fin = i;

  
  
  DA FAREEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
	/*
			for (cont = 0; cont < i; cont++)
		{
			if (in[i] =  )
			{

		}
	}
	*/

}
