#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int n, i, j, k, count, aux, len, variable;
  string final;
  i = 0;
  main:
    cin >> n;
    if (i < n) goto loopGeneral;
    else goto final;
  loopGeneral:
    i++;
    cin >> k;
    len = to_string(k).length();
    count = 0;
    j = 1;
    aux = k/pow(10,len-j);
    final = "";
    if (i<=n) goto loopPrimero;
    goto main;

  loopPrimero:
    j++;
    if (aux == int(k/pow(10,len-j))) {
      count++;
    } else {
      final = final + to_string(count) + to_string(aux);
      count = 1;
    }
    variable = pow(10,len-j);
    aux = k/pow(10,len-j);
    k = k % variable;
    cout << final << endl;
    if (j<=len) goto loopPrimero;
    else goto loopGeneral;

  final:
    return 0;
}