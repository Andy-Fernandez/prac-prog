// https://platzi.com/clases/6636-javascript-30-dias/60087-playground-crea-tu-propio-metodo-map/
// En este desafío debes desarrollar una implementación personalizada del método map utilizando funciones de orden superior.

// Recibirás como parámetros un array y una función (func). El array contendrá un conjunto de elementos (números, objetos, strings, etc.) y la función se utilizará para aplicar una acción sobre cada elemento del array. Tu objetivo es devolver un nuevo array con los resultados de la función tal y como lo haría el método map.

// Ejemplo 1:

// Input: myMap([1,2,3,4], (num) => num * 2)

// Output: [2,4,6,8]

// Ejemplo 2:

// Input: myMap([
//   {name: "michi", age: 2},
//   {name: "firulais", age: 6}],
//   (pet) => pet.name)

// Output: ["michi", "firulais"]

export function myMap(array, func) {
  const newArray = [];
  for (let i = 0; i < array.length; i++) {
    newArray.push(func(array[i], i, array));
  }
  return newArray;
}

// Para utilizar la función myMap(), se puede pasar un array y una función personalizada como argumentos, tal como se haría con el método map() nativo. Por ejemplo:

myMap([1,2,3,4], (num) => num * 2); // devuelve [2, 4, 6, 8]
myMap([{name: "michi", age: 2}, {name: "firulais", age: 6}], (pet) => pet.name); // devuelve ["michi", "firulais"]
