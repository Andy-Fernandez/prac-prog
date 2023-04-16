"use strict";

// https://platzi.com/clases/6636-javascript-30-dias/59873-playground-encuentra-el-palindromo-mas-grande/
// En este desafío, debes crear una función que encuentre el palíndromo más largo en una lista de palabras.
// Recibirás un único parámetro: un array de palabras. Si no hay ningún palíndromo en la lista, la función debe devolver null. Si hay más de un palíndromo con la misma longitud máxima, debes devolver el primer palíndromo encontrado en la lista.
// Un palíndromo es una palabra que se puede leer de la misma manera tanto hacia adelante como hacia atrás.
// Ejemplo 1:
// Input: findLargestPalindrome(["racecar", "level", "world", "hello"])
// Output: "racecar"
// Ejemplo 2:
// Input: findLargestPalindrome(["Platzi", "javascript", "html", "css"])
// Output: null
// Pimero creamos una funcion para determinar si la prlabra es palindromo
function isPalindrome(word) {
  var len = word.lengh;
  console.log(len);
}