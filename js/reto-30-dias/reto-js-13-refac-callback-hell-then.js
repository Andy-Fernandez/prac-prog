// https://platzi.com/clases/6636-javascript-30-dias/60180-playground-resuelve-el-callback-hell-usando-promes/
// En este desafío tienes un código base el cual se aplica una mala práctica de programación que conocemos como el callback hell y tu reto es evitarlo usando promesas.

// Nota: No uses async/await, ya que este reto se trata de resolverlo mediante promesas con la función then.

// Para solucionarlo vas a encontrar una función llamada runCode que no recibe parámetros de entrada que tiene el código base que tienes que refactorizar, además el archivo tasks.js con las funciones que tienes que ejecutar.

// Dentro del cuerpo de la función runCode debes escribir tu solución y además pasar y deberías pasar las funciones del archivo tasks.js a promesas.

// Ejemplo:

// Input:
// runCode()
// .then(response => console.log(response));

// Output:
// ["Task 1", "Task 2", "Task 3"]

// El código base que tienes que refactorizar es el siguiente:
import { doTask1, doTask2, doTask3 } from './tasks';

export function runCode() {
  const strings = [];
  return new Promise((resolve) => {
    doTask1((rta1) => {
      strings.push(rta1);
      doTask2((rta2) => {
        strings.push(rta2);
        doTask3((rta3) => {
          strings.push(rta3);
          resolve(strings);
        })
      })
    })
  })
}

// El código que debes refactorizar es el siguiente:
import { doTask1, doTask2, doTask3 } from './tasks';

export function runCode() {
  const strings = [];
  return doTask1()
    .then(rta1 => {
      strings.push(rta1);
      return doTask2();
    })
    .then(rta2 => {
      strings.push(rta2);
      return doTask3();
    })
    .then(rta3 => {
      strings.push(rta3);
      return strings;
    });
}

// Para llamar a la función runCode() y manejar la promesa, se puede utilizar la sintaxis de then() y catch(). Por ejemplo:

runCode()
  .then(response => console.log(response))
  .catch(error => console.log(error));
