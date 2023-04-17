// https://platzi.com/clases/6636-javascript-30-dias/60085-playground-crea-una-calculadora-con-closures/
// En este desafío tendrás que crear una calculadora mediante el uso de closures.

// La calculadora debe contar con los siguientes métodos:

// add: recibe un número, lo suma al total y devuelve el resultado
// subtract: recibe un número, lo resta al total y devuelve el resultado
// multiply: recibe un número, lo multiplica al total y devuelve el resultado
// divide: recibe un número, lo divide al total y devuelve el resultado
// clear: reinicia el total a 0 y devuelve el resultado
// getTotal: devuelve el total actual.
// Ejemplo 1:

// Input:
// const calculator = createCalculator()
// calculator.add(10)

// Output: 10

// Ejemplo 2:

// const calculator = createCalculator()
// calculator.add(10)
// calculator.subtract(-10)

// Output: 20

// Ejemplo 3:

// const calculator = createCalculator()
// calculator.add(10)
// calculator.subtract(-10)
// calculator.clear()

// Output: 0
export function createCalculator() {
  let total = 0;

  function add(num) {
    total += num;
    return total;
  }

  function subtract(num) {
    total -= num;
    return total;
  }

  function multiply(num) {
    total *= num;
    return total;
  }

  function divide(num) {
    total /= num;
    return total;
  }

  function clear() {
    total = 0;
    return total;
  }

  function getTotal() {
    return total;
  }

  return {
    add,
    subtract,
    multiply,
    divide,
    clear,
    getTotal
  }
}
