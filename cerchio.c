#include <stdio.h>
 #include <math.h> 
 #define AREA(r) M_PI*(r)*(r)
  #define PERIMETRO(r) 2*M_PI*(r)
   int main(){
    float r;
	 printf("inserisci il raggio\n");
	 scanf("%f",&r);
	  float area=AREA(r);
	  float perimetro=PERIMETRO(r); 
	  printf("area= %.2f\nperimetro= %.2f",area,perimetro);
	   }

