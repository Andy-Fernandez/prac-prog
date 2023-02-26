#include <iostream>
using namespace std;

// Descripción
// Descifra la siguiente serie:

// 1 -1 2 -2 3 -3 4 -4 5 -5 6 -6 7 -7 8 -8…

// Entrada
// Un número n donde 1 <= n <= 1000

// Salida
// N números de la serie

int main(){
  int n, i, iterador;
  string salida = "";
  // Lectura de datos antes de entrar al loop
  main:
    i = 0;
    iterador = 1;
    cin >> n;
    goto loop;
  //Inicio del loop
  loop:
    goto process;
  //Proceso a realizar en cada iteracion
  process:
    if(i % 2 == 0) salida += to_string(iterador) + " ";
    else salida += to_string(-1 * (iterador)) + " ";
    if(i % 2 != 0) iterador++;
    i++;
    //Condicion de salida del loop
    if (i < n) goto loop;
    else goto final;
  final:
    cout << salida << endl;
    return 0;
}