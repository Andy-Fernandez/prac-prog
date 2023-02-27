#include <iostream>
using namespace std;

//este es un programa que nos dice cual es el primo mas cercano a un numero dado

int main(){
  //varaibeles
  int n;
  int i, j;
  int incremento, decrementos;
  int contIncremento, contDecrementos;
  int cuadrado;
  int numeros[1000000];

  //todo el vector a false
  i = 1;
  primos:
    i++;
    j = i*i;
    if (numeros[j]==0) goto primosLoop;
    else goto main;

  primosLoop:
    numeros[j] = 1;
    j += i;
    if (j<1000000) goto primosLoop;
    else goto primos;

  main:
    cin >> n;
    goto loop;
  
  loop:
    incremento = n;
    decrementos = n;
    contIncremento = 0;
    contDecrementos = 0;
    goto loopProcess;
  
  loopProcess:
    // cout << "incremento: " << incremento << endl;
    // cout << "decrementos: " << decrementos << endl;
    if (numeros[incremento]==0) goto loopFinal;
    if (numeros[decrementos]==0) goto loopFinal;
    incremento++;
    decrementos--;
    contIncremento++;
    contDecrementos++;
    goto loopProcess;
  
  loopFinal:
    if (contIncremento < contDecrementos) cout << incremento << endl;
    else cout << decrementos << endl;
    return 0;

}