#include <stdio.h>

#define MAX 100

int main() {

	/******************/
	/*                */
	/*   CAPITOLO 6   */
	/*                */
	/******************/


	//ESERCIZIO 6.1

	char stringa[MAX];

	FILE* file;

	if (fopen("file.txt", "r") == NULL)
	{
		return printf("C'è stato un errore aprendo il file ");
	}



	while(fscanf(file, "%s", stringa));
	{
		fscanf(file, "%s", stringa);
		printf("%s", stringa);
	}
	

	//ESERCIZIO 6.2


	FILE* file;

	int num;

	if (fopen("file.txt", "w") == NULL)
	{
		return printf("Impossibilie aprire il file");
	}
	

	printf("inserisci una sequenza di numeri");
	scanf("%d", &num);


	while (!num == 999)
	{
		fprintf(file, "%d", num);
		scanf("%d", &num);
	}




	//ESERCIZO 6.3

	char  car;
	FILE* in;
	FILE* out;



	int caratterein;
	int carattereout;


	if (fopen("in.txt", "r") == NULL)
	{
		return printf("Impossibile aprire il file in.txt");
	}

	if (fopen("out.txt", "w") == NULL)
	{
		return printf("Impossibile aprire il file out.txt");
	}


	

	while (fscanf(in, "%c", &car) && carattereout > 0)
	{
		carattereout = fprintf(out, "%c", car);
		caratterein = fscanf(in, "%c", &car);
	}
  
}
