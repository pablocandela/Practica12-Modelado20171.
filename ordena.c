#include <stdio.h> //Se importa la biblioteca estandar.

void imprime_arreglo(int *arreglo, int longitud) {//Metodo para imprimir el arreglo en consola que recibe un apuntador a un arreglo de enteros y el tamaño del arreglo.
	int i;//Variable para poder iterar sobre el arreglo.
	printf("[");//imprime el inicio del arreglo.
	for(i = 0; i < longitud; i++) //Iteramos cada posición del arreglo.
    	printf("%d ", arreglo[i]);//Se imprimen todos los elementos del arreglo. 
  	printf("]\n"); //Imprime el final del arreglo.
}

void bubble_sort(int *arreglo, int longitud) {//Metodo que ordena elementos de un arreglo con el algoritmo bubble sort que recibe un apuntador a un arreglo de enteros y el tamaño del arreglo.
	int j;//Variable de tipo entero que se usa en los bucles de iteracion. 
	int i;//Variable de tipo entero que se usa en los bucles de iteracion.
	for(j = 0; j < longitud -1; j++){//Se usa la variable j para saber cuando detenerse en la iteracion del arreglo, para esto su valor debe ser menor a el tamaño del arreglo.
		for( i = 0; i < longitud-j-1; i++){//la variable i se usa para iterar el arreglo desde el primer elemento hasta uno antes de la variable j.
			if(arreglo[i+1] < arreglo[i]){ //Compara si el elemento siguiente es menor al elemento actual.
				int aux = arreglo[i+1];//Se guarda en una variable auxiliar el valor del elemento en la posicion i+1, esto para no perder su valor despues de modificarla. 
  				arreglo[i+1] = arreglo[i];//El valor del arreglo en la posicion i+1 es cambiado por el valor del arreglo en la posicion i. 
  				arreglo[i] = aux;//El valor del arreglo en la posicion i toma el valor del la posicion i+1 del arreglo. 
			}
		}
	}
}

int main() {
	int arreglo[5];//Se crea un arreglo de tamaño 5.
	arreglo[0]=1;//A la posicion 0 se le asigna el valor 1.
	arreglo[1]=5;//A la posicion 1 se le asigna el valor 5.
	arreglo[2]=6;//A la posicion 2 se le asigna el valor 6.
	arreglo[3]=3;//A la posicion 3 se le asigna el valor 3.
	arreglo[4]=1;//A la posicion 4 se le asigna el valor 1.
	int tamano = 5;//Se guarda el tamaño del arreglo para poder hacer el ordenamiento.
	printf("Arreglo desordenado:");//Imprime un mensaje para decir que el arreglo no esta ordenado.
	imprime_arreglo(arreglo, tamano); //Imprime el arreglo no ordenado.
	printf("\nArreglo ordenado:");//Imprime un mensaje para indicar que el arreglo ya esta ordenado.
	bubble_sort(arreglo, tamano);//Se ordena el arreglo con la funcion  bubble sort.
	imprime_arreglo(arreglo, tamano);//Imprime el arreglo ya ordenado.
	return 0; //Por convension se regresa 0.
}
