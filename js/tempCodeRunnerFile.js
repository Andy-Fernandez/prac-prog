const readline = require("readline");
console.log("Enter two numbers");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
rl.question("Enter a number: ", (a) => {
  rl.question("Enter another number: ", (b) => {
    console.log(`The sum of ${a} and ${b} is ${+a + +b}`);
    rl.close();
  });
});