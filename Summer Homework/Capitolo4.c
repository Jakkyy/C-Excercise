#include <stdio.h>

int main() 
{
	/******************/
	/*                */
	/*   CAPITOLO 4   */
	/*                */
	/******************/


	//ESERCIZIO 4.1


	//I valori  contenuti nella variabile num1 e num2 rimangono gli stessi, quindi 
	//num1: 10
	//num2: 20
	//perchè non viene usato il passaggio di parametri per indirizzo
	//usando il passaggio di parametri per indirizzo prima di ogni variabile bisogna usare il *


	//ESERCIZIO 4.2

	void Area(Rettangolo)
	{
		return(Rettangolo.lato1 * Rettangolo.lato2)
	}

	//ESERCIZIO 4.6

	#include <stdio.h>

	void funz(int a, int* b)
	{
		int c;
		scanf(" % d\n", c);
		*b = c;
		*b = &a;
	}

	void main()
	{
		int e, f;
		f = 10;

		funz(f, &e);
		printf(" % d % d\n", f, e);
	}

}
