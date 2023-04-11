let size = 5;
let character = '*';
let cadena = '';
for (let i = 1; i <= size; i++) {
  for (let j = i; j < size; j++){
    cadena = cadena + " ";
  }
  for (let k = 1; k <= i; k++){
    cadena = cadena + character;
  }
  cadena = cadena + "\n";
}
console.log(cadena);