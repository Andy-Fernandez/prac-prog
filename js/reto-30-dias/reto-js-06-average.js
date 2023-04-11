// https://platzi.com/clases/6636-javascript-30-dias/59872-playground-obten-el-promedio-de-los-estudiantes/
// En este desafío, deberás calcular el promedio general de una clase, así como el promedio individual de cada estudiante.

// Para ello, se te proporcionará un array de objetos, cada uno de los cuales representará a un estudiante y tendrá las siguientes propiedades:

// name: El nombre del estudiante
// grades: Las notas de cada materia del estudiante
// A partir de esta información, debes retornar un nuevo objeto que tenga la propiedad classAverage con el promedio de la clase y un array de students con los estudiantes y sus promedios individuales.

// Es importante mencionar que los promedios deben ser calculados con precisión y se deben redondear a dos decimales para que los test pasen sin problema alguno. Puedes usar el método toFixed() el cual se usa de la siguiente manera 👇

// const number = 100.32433;
// number.toFixed(2); // "100.32"

// 👀 Ten en cuenta que este método regresa el número como un string y se espera que sea de tipo numérico.

// Ejemplo:

// Input: getStudentAverage([
//   {
//     name: "Pedro",
//     grades: [90, 87, 88, 90],
//   },
//   {
//     name: "Jose",
//     grades: [99, 71, 88, 96],
//   },
//   {
//     name: "Maria",
//     grades: [92, 81, 80, 96],
//   },
// ])

// Output: {
//   classAverage: 88.17,
//   students: [
//     {
//       name: "Pedro",
//       average: 88.75
//     },
//     {
//       name: "Jose",
//       average: 88.5
//     },
//     {
//       name: "Maria",
//       average: 87.25
//     }
//   ]
// }
export function getStudentAverage(students) {
  let classAverage = 0
  studentsString = []
  for (const student of students) {
    let studentObject = {
      nameS: student.name,
      average: student.reduce(function (acumulador, numero) {
        return acumulador + numero;
      }, 0)
    }
  }
}