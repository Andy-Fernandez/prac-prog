// Descripción
// La clave MURCIELAGO es una sencilla clave que como Boy Scout aprender debes. Es fácil de realizar por su ventaja de 

// cambiar las letras por símbolos numéricos, trabajando con la siguiente tabla de conversión:

// M=0, U=1, R=2, C=3, I=4, E=5. L=6. A=7, G=8, O=9

// De manera que si nuestro texto original fuera BOLIVIA

// el resultado de la codificación sería: B964V47

// Entrada
// La entrada consiste en un entero N que es el número de casos de prueba, seguido de las N líneas que contiene una cadena escrita totalemente en letras mayúsculas.

// Salida
// Imprimir N líneas con las cadenas convertidas.

// Ejemplo Entrada
// 3
// BOLIVIA
// UNIVERSITARIO
// ENTRADA
// Ejemplo Salida
// B964V47
// 1N4V52S4T7249
// 5NT27D7
#include <iostream>
using namespace std;

int main(){
  int n, i, j;
  string s, salida = "";
  // Lectura de datos antes de entrar al loop
  main:
    cin >> n;
    j = 0;
    goto loop;
  //Inicio del loop
  loop:
    i = 0;
    cin >> s;
    goto process;

  //Proceso a realizar en cada iteracion
  process:
    //Condicion de salida del loop
    // cout << "s: " << s << endl;
    if (i < s.length()) goto loop2;
    else goto final;
  loop2:
    switch (s[i]) {
      case 'M':
        salida += "0";
        break;
      case 'U':
        salida += "1";
        break;
      case 'R':
        salida += "2";
        break;
      case 'C':
        salida += "3";
        break;
      case 'I':
        salida += "4";
        break;
      case 'E':
        salida += "5";
        break;
      case 'L':
        salida += "6";
        break;
      case 'A':
        salida += "7";
        break;
      case 'G':
        salida += "8";
        break;
      case 'O':
        salida += "9";
        break;
      default:
        salida += s[i];
        break;
    }
    i++;
    goto process;
  final:
    cout << salida << endl;
    salida = "";
    j++;
    goto process2;
  process2:
    // cout << "j: " << j << endl;
    // cout << "n: " << n << endl;
    if (j < n) goto loop;
    else goto end;
  end:
    return 0;
}