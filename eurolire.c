#include <stdio.h>
#define COSTANTE 1936.26
#define lira(i) (i)/COSTANTE
# define euro(b) (b)*COSTANTE

    int main(){
	 float a,risultato;
	printf("inserisci un valore in lira\n");
	scanf("%f",&a);
	risultato=lira(a);
	printf("il valore in euro e' %.2f\n",risultato);
	printf("inserisci un valore in euro\n"); 
	scanf("%f",&a); 
	risultato=euro(a); 
	printf("il valore in lire e' %.2f\n",risultato);
		   }

