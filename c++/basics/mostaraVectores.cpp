#include <iostream>
using namespace std;

void leerUnVector(){
  int n, i;

  // Lectura de datos antes de entrar al loop
  main:
    i = 0;
    cin >> n;
    //Declaracion del vector
    int v[n];
    goto loop;
  //Inicio del loop
  loop:
    goto process;
  //Proceso a realizar en cada iteracion
  process:
    cin >> v[i];
    i++;
    //Condicion de salida del loop
    if (i < n) goto loop;
    else goto final;
  final:
    return;
}
void mostrarVector(int v[], int n){
  int i = 0;
  loop:
    cout << v[i] << " ";
    i++;
    if (i < n) goto loop;
    else goto final;
  final:
    return;
}
void leerMostrarVector(){
  int n, i;

  // Lectura de datos antes de entrar al loop
  main:
    i = 0;
    cin >> n;
    //Declaracion del vector
    int v[n];
    goto loop;
  //Inicio del loop
  loop:
    goto process;
  //Proceso a realizar en cada iteracion
  process:
    cin >> v[i];
    i++;
    //Condicion de salida del loop
    if (i < n) goto loop;
    else goto mostrar;
  mostrar:
    i = 0;
    goto loopMostrar;
  loopMostrar:
    cout << v[i] << " ";
    i++;
    if (i < n) goto loopMostrar;
    else goto final;
  final:
    return;
}
int main(){
  leerMostrarVector();
  return 0;
}
