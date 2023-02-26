#include <iostream>
using namespace std;

void firstVersionFor(){ //loop 0 to n
  int n, i;
  cin >> n;
  i = 0;
  loopMain:
    //depending on the problem we can do the i++ here
    goto process;
  process:
    cout << i << endl;
    i++;
    if (i < n) goto loopMain;
    else goto final;
  final:
    return;
}

void forDecomposed(){
  int n, i;
  main:
    i = 0;
    cin >> n;
    loop:
      //depending on the problem we can do the i++ here
      process:
        cout << i << endl;
        i++;
        if (i < n) goto loop;
        else goto final;
  final:
    return;
}
void forDecomposed2(){
  int n, i;
   // Lectura de datos antes de entrar al loop
  main:
    i = 0;
    cin >> n;
    goto loop;
  //Inicio del loop
  loop:
    goto process;
  //Proceso a realizar en cada iteracion
  process:
    cout << i << endl;
    i++;
    //Condicion de salida del loop
    if (i < n) goto loop;
    else goto final;
  final:
    return;
}
void forDecomposedNested(){
  int n, i, m, j;
  main:
    i = 0;
    cin >> n;
    loop:
      //depending on the problem we can do the i++ here
      process:
        cout << i << endl;
        i++;
        j = 0;
        cin >> m;
        loopNested:
          //depending on the problem we can do the j++ here
          processNested:
            cout << j << endl;
            j++;
            if (j < m) goto loopNested;
            else goto finalNested;
    finalNested:
      if (i < n) goto loop;
      else goto final;
  final:
    return;
}
void forDecomposedNested2(){
  int n, i, m, j;

  main:
    i = 0;
    cin >> n;
    goto loop;

  loop:
    //depending on the problem we can do the i++ here
    goto process;

  process:
    cout << i << endl;
    i++;
    j = 0;
    cin >> m;
    goto loopNested;

  loopNested:
    //depending on the problem we can do the j++ here
    goto processNested;

  processNested:
    cout << j << endl;
    j++;
    if (j < m) goto loopNested;
    else goto finalNested;

  finalNested:
    if (i < n) goto loop;
    else goto final;

  final:
    return;
}

void forDecomposedNested3(){
  int n, i, m, j, s, k;

  main:
    i = 0;
    cin >> n;
    goto loop;

  loop:
    //depending on the problem we can do the i++ here
    goto process;

  process:
    cout << i << endl;
    i++;
    j = 0;
    cin >> m;
    goto loopNested;

  loopNested:
    //depending on the problem we can do the j++ here
    goto processNested;

  processNested:
    cout << j << endl;
    j++;
    k = 0;
    cin >> s;
    goto loopNested2;

  loopNested2:
    //depending on the problem we can do the k++ here
    goto processNested2;

  processNested2:
    cout << k << endl;
    k++;
    if (k < s) goto loopNested2;
    else goto finalNested2;

  finalNested2:
    if (j < m) goto loopNested;
    else goto finalNested;

  finalNested:
    if (i < n) goto loop;
    else goto final;

  final:
    return;
}

int main(){
  // firstVersionFor(); // O(n)
  // forDecomposed(); // O(n)
  // forDecomposed2(); // O(n)
  // forDecomposedNested(); // O(n*m)
  // forDecomposedNested2(); // O(n*m)
  // forDecomposedNested3(); // O(n*m*s)
  return 0;
}