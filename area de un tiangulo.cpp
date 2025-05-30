#include <conio.h>
#include <stdio.h>


int main ()
{
	float base, altura, area;

	
	printf("calcula el area o perimetro de un triangulo");
	printf("\ndame la Base: ");
	scanf("%f", &base);
	printf("\ndame la Altura: ");
	scanf("%f", &altura);
	area= base*altura/2;
	printf("\nEl area es: % f", area);
		

	
	getch ();
	
	
	
	
}
