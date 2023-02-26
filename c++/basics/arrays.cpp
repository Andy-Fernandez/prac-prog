#include <iostream>
using namespace std;

void recorrerArray(){
  int len, i;
  string cadena;
  // string subCadena = "";

  cin >> cadena;
  len = cadena.length();
  i = 0;
  loopArray:
    goto arrayProcess;

  arrayProcess:
    cout << cadena[i] << endl;
    //Ejemplo
    // if (i%2 == 0) subCadena = subCadena + cadena[i] + " ";
    i++;
    if (i < len) goto loopArray;
    else goto arrayFinal;
  arrayFinal:
    // cout << "subaCadena: " << subCadena << endl;
    return;
}

int main(){
  recorrerArray();
  return 0;
}