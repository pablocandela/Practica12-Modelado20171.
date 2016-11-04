#include <stdio.h> //Se importa la biblioteca estandar.

/* Declaración de funciones */
int misterio1(int (*fun) (int), int);//Declara una funcion que recibe un apuntado a otra funcion la cual a su vez recibe un entero y regrasa un entero.
void misterio2(void (*fun) (int), int);//Declara una funcion que recibe un apuntador a otra funcion la cual recibe un entero y regresa un entero y que en el segundo argumento recibe un entero.
int cuadrado_num(int); //Declara una función que recibe un entero y  regresa un entero
void imprime_num(int); //Declara una función que recibe un entero y no regresa nada.

int main() //Declara el metodo principal del programa.
{
  int (*fun1) (int); //Declara un apuntador a una funcio que recibe un entero y regresa un entero.
  void (*fun2) (int); //Declara un apuntador que recibe un entero y que no regresa nada.

  /*Los apuntadores creados previamente ahora van a apuntar a 
  las direcciones en memoria de dos funciones.*/
  fun1 = &cuadrado_num; //El apuntador fun1 apunta a la direccion de memoria de la funcion cuadrado_num.
  fun2 = &imprime_num; //El apuntador fun2 apunta a la direccion de memoia de la funcion imprime_num.
  int var = misterio1(fun1, 3);//Se declara una variable de tipo int inicializada con fun1 aplicado al entero 3, fun1 al apuntar a cuadrado_num regresara el cuadrado de el entero 3. 
  misterio2(fun2, var);//Imprime el numero 9 debido a que fun2 apunta a la funcion imprime_num que toma como parametro var con valor antes asignado por la funcion cuadrado_num.
}

int misterio1(int (*fun) (int), int num) //Funcion previamente declarado que recibe un apuntador a una función y un entero.
{
    return fun(num); //Regresa el resultado de la funcion que toma como argumento al segundo parametro.
}

void misterio2(void (*fun) (int), int num) //Recibe un apuntador a función y un entero.
{
    fun(num); //Solo se aplica la función que se apunta al segundo parámetro pero no regresa nada por la firma de la funcion.
}

int cuadrado_num(int num) //Funcion previamente declaradaque recibe un entero y regresa el cuadrado de el entero que recibe como parametro.
{
    return num * num; //El parametro recibido se multiplica con sigi mismo  y regresa el resultado que en este caso es el cuadrado del numero.
}

void imprime_num(int num)//Funcion previmente declarada que recibe un entero y lo imprime en pantalla; La funcion no regresa nada.
{
    printf("Tada: %d\n", num); //Imprime Tada: y despues se imprime el entero que recibe comoo parametro,al final se da un salto de linea.
}
