#include <iostream>
#include <cmath>
using namespace std;

// El problema cosnsite en evaluar una sumatoria:
// sum((i+k)/(2+i+k) para i=0 hasta n-1)
// la entrada consiste en un entero n y k (1 <= n <= 100, 1 <= k <= 100)
// leer hata fin de archivo
int main(){
  //variables
  int n, k, i;
  double sumatoria;

  //inicializacion
  sumatoria = 0;

  //entrada hasta fin de archivo
  goto isEndFile;

  processRead:
    i = 0;
    sumatoria = 0;
    goto loop;

  loop:
    sumatoria += double((double(i+k))/(double(2+i+k)));
    i++;
    if(i < n) goto loop;
    cout << round(sumatoria) << endl;
    goto isEndFile;

  isEndFile:
    if(cin >> n >> k ) goto processRead;
    else goto endRead;

  endRead:
    return 0;
}