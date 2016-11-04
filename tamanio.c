#include <stdio.h> //Se importa la bibloteca estandar de c.


int main(){ //Es el metodo principal del programa.
	double d = sizeof(double);//Declaramos un doble y le asignamos el valor del tamaño de los dobles. 
	float f = sizeof(float);//Declaramos un flotante y le asignamos el valor del tamaño de los flotantes.
	int h = sizeof(int*);//Declaramos un entero y le asignamos el valor del tamaño de un apuntador a un entero.
	printf("El tipo int tiene tamaño:%d\n", sizeof(int));//Imprime el tamaño de un entero.
	printf("El tipo short tiene tamaño:%d\n", sizeof(short));//Imprime el tamaño de un entero corto.
	printf("El tipo unsigned int tiene tamaño: %d\n", sizeof(unsigned int));//Imprime el tamaño de un entero sin signo. 
	printf("El tipo char tiene tamaño: %d\n", sizeof(char));//Imprime el tamaño de un caracter.
	printf("El tipo float triene tamaño: %f\n", f);//Imprime el tamaño de un flotante.
	printf("El tipo double tiene tamaño: %f\n", d);//Imprime el tamaño de un doble.
	printf("El tipo int* tienen tamaño %d\n", h);//Imprime el tamaño de un apuntador a un entero.
	return 0;//Por convencion se regresa un cero.
}
