#include <stdio.h>//Se importa la biblioteca estandar de c.
						
void swap(int *a, int *b) {//Firma de una funcion que recibe dos apuntadores a enteros es decir su direccion en memoria.
  int auxiliar = *a;	//Declaramos un entero auxiliar que guarde el valor almacenado de a para que al final se lo asigne a b.
  *a = *b; //El valor almacenado de a ahora es cambiado por el de b.
  *b = auxiliar; //El valor almacenado de b ahora toma el valor que tenia a.
}

int main() {
  int a = 2;//Se declara un entero a y se le asigna el valor 2.
  int b = 3;//Se declara un entero b y se le asigna el valor 3.
  printf("El valor inicial de a es: %d ", a);//Imprime el valor inicial de a.
  printf("y el de b es: %d\n",b);//Imprime el valor inicial de b. 
  swap(&a, &b);	/*Se ejecuta el metodo swap con la direcion en memoria de a y de b es necesario usar & 
				ya que el metodo swap recibe apuntadores y con el operador & obtenemos la direccion 
				en memoria de las variables.*/
  printf("El valor de a despues del intercambio es: %d " ,a);//Imprime el valor de a despues del intercambio.
  printf("y el valor de b es: %d\n",b);//Imprime el valor de b despues del intercambio.
  return 0; //El estado de salida devuelto denota que no hubo complicaciones.
}

