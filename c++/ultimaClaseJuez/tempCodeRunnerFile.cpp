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
    cout << "incremento: " << incremento << endl;
    cout << "decrementos: " << decrementos << endl;
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