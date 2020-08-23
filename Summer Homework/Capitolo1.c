#include <stdio.h>

int main() 
{
	
	/******************/
	/*                */
	/*   CAPITOLO 1   */
	/*                */
	/******************/


	//ESERCIZIO 1.02
	int a, b;

	if (a < 10)
	{
		if (b < 20)
			printf("prova1");
		else printf("prova2");
	}
	else printf("prova2");

	//È possibile scriverlo in modo equivalente senza utilizzare il secondo if?

	if (a < 10 && b < 20)	//Si usa il && 
	{
		printf("prova1");
	}
	else
	{
		printf("prova2");
	}

	//Usando il && è come se si usasse un altro if con la condizione b < 20




	//ESERCIZIO 1.4
	int a;
	a = 12;

	while (a < 10)
		a++;

	//In questo programma non si entra mai nel while perche la condizione è a < 10 mentre quando a viene dichiarata come 12

	a = 12;
	while (a > 10)
		a++;

	//In questo programma il while viene eseguito all'infinito perchè la condizione a > 10 è sempre vera (si dichiara a = 12 e nel while a aumenta ad ogni giro




	//ESERCIZIO 1.5

	/* primo frammento */
	int i, a[10];
	for (i = 0; i < 10; i++)
		a[i] = i;

	/* secondo frammento */

	int a[10];
	int i;
	i = 9;
	while (i >= 0)
	{
		a[i] = i;
		i--;
	}

	//I due programmi assegnano all' array a il valore del contatore i e sono considerabili equivalenti 

	//Perchè il primo programma usa un for che come condizione ha i < 10 (ad ogni giro i aumenta) 

	//Mentre il secondo usa un while che come condizione ha i > = 0 (ad ogni giro i diminuisce)
	
}
