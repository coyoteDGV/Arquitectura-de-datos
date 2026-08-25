#include <stdio.h>

int main(){
	int cantidad;
	int sig;
	int n = 0;
	int a = 0;
	int b = 1;


	printf ("cuantos numeros de la serie fibonacci quieres: ");
	scanf("%d", &cantidad);

	printf ("serie fibonacci: ");

	for (int i=0; i<cantidad; i++){
		printf ("%d", a);

		sig  = a + b;
		a = b;
		b = sig;
	}
	return 0;
}
