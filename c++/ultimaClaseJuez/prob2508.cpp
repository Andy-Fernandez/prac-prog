#include <iostream>
using namespace std;

// Problem : NÚMERO CUADRADO
// Time Limit: 1 Sec  Memory Limit: 128 MB
// Enviar: 18  Resuelto: 11
// [Enviar][Estado][Foro]
// Descripción
// Se define como número cuadrado, a aquel número entero que pueda expresarse como el área de un cuadrado (base*altura).

// Recordemos que el área de un cuadrado es la multiplicación de sus lados.

// Por ejemplo 4, representa el área de un cuadrado con base y altura igual a 2, mientras que 9, representa el área de un cuadrado con base y altura igual a 3. Los cuadrados siempre tienen sus cuatro lados iguales.
// Entrada
// La primera línea contiene un número entero T (1≤T≤100), que indica el número de casos de prueba. Cada caso de prueba consiste de dos números enteros: 
// Salida
// Por cada caso de prueba, escriba en la salida cuantos números cuadrados existen entre a y b inclusive.


// Ejemplo Entrada
// 3
// 2 100
// 50 100
// 2361 6723
// Ejemplo Salida
// 9
// 3
// 33

int main(){
  //varaibeles
  int n, a, b, cont;
  int i, j;
  int cuadrado;
  int numeros[1000000];

  //todo el vector a false
  i = 0;
  numerosCuadrados:
    cuadrado = i*i;
    numeros[cuadrado] = 1;
    i++;
    if(cuadrado<1000000) goto numerosCuadrados;

  main:
    i = 0;
    cin >> n;
    goto loop;
  //Inicio del loop
  loop:
    cin >> a >> b;
    cont = 0;
    i++;
    goto loopProcess;

  loopProcess:
    if (numeros[a]==1) cont++;
    a++;
    if (a <= b) goto loopProcess;
    else goto loopFinal;

  loopFinal:
    cout << cont << endl;
    if (i < n) goto loop;
    else goto final;
  final:
    return 0;
}