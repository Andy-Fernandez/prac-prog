#include <iostream>
using namespace std;

// Ejemplo Entrada
// 5 6
// Ejemplo Salida
// 5 10 15 20 25 30 

int main(){
  int n, i, x;
  string salida = "";
   // Lectura de datos antes de entrar al loop
  main:
    i = 0;
    cin >> x >> n;
    goto loop;
  //Inicio del loop
  loop:
    i++;
    salida += to_string(x*i) + " ";
    goto process;
  //Proceso a realizar en cada iteracion
  process:
    //Condicion de salida del loop
    if (i < n) goto loop;
    else goto final;
  final:
    cout << salida << endl;
    return 0;
}