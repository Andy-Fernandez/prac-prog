const numeros = ["rojo", "azul", "verde"];

const suma = numeros.reduce(function(acumulador, numero) {
  return acumulador + numero;
}, 'hi');
console.log(suma); // 15