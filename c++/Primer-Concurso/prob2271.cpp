#include <iostream>
using namespace std;

//La entrada es un n que indica la cantidad de datos de entrada
//y luego n datos de entrada, a b. Donde (a<=0) y (b<0)

//Tenemos que determinar si la dvicion de a entre b es excata o no.
// si es no es exacta, imprimir "La división no es exacta. Cociente: 2 Resto: 4"
// si es exacta, imprimir "La división es exacta. Cociente: 2"

int main(){
  //variables
  int n, a, b, i, modulo;
  double division;

  main:
    i = 0;
    cin >> n;
    goto loop;
  //Inicio del loop
  loop:
    goto process;
  //Proceso a realizar en cada iteracion
  process:
    cin >> a >> b;
    modulo = a % b;
    division = double(a) / double(b);
    if(modulo == 0) cout << "La división es exacta. Cociente: " << division << endl;
    else cout << "La división no es exacta. Cociente: " << int(division) << " Resto: " << modulo << endl;
    i++;
    //Condicion de salida del loop
    if (i < n) goto loop;
    else goto final;
  final:
    return 0;

}