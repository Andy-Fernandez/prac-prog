// https://platzi.com/clases/6636-javascript-30-dias/60220-playground-sistema-de-reservaciones-de-un-hotel/
// En este desafío deberás crear un sistema de administración para un hotel.

// El objetivo de este ejercicio es utilizar closures para implementar la lógica de una función (hotelSystem) que administre un hotel. La función recibirá un parámetro rooms, definirá el número total de habitaciones.

// El closure debe retornar las siguientes funciones:

// searchReservation(id): esta función permitirá buscar una reservación por su ID. En caso de no encontrarla, se retornará un error con el mensaje "La reservación no fue encontrada".

// getSortReservations(): esta función nos devolverá una copia de las reservaciones sin modificar el array original ordenando las reservaciones por fecha de check-in de manera ascendente.

// addReservation(reservation): esta función se usará para agregar una nueva reservación. Debe asegurarse de que la habitación solicitada esté disponible para las fechas de check-in y check-out. En caso de que esté reservada, se retornará un error con el mensaje "La habitación no está disponible".

// removeReservation(id): esta función eliminará la reservación correspondiente al ID recibido y la retornará. En caso de que la reservación no exista, se retornará un error con el mensaje "La reservación que se busca remover no existe".

// getReservations(): esta función nos devolverá todas las reservaciones.

// getAvailableRooms(checkIn, checkOut): esta función recibirá dos parámetros, checkIn y checkOut con formato "dd/mm". La función debe devolver las habitaciones disponibles para las fechas dadas.

// El formato que recibirás para las reservaciones será el siguiente:

// id: un identificador único
// name: El nombre de quien agenda
// checkIn: Fecha de llegada
// checkOut: Fecha de salida
// roomNumber: La habitación solicitada
// Ejemplo 1:

// Input:

// const hotel = hotelSystem(10);

// // Agregar una nueva reservación
// hotel.addReservation({
//   id: 1,
//   name: "John Doe",
//   checkIn: "01/01",
//   checkOut: "02/01",
//   roomNumber: 1,
// });

// hotel.getReservations();

// Output:
// [
//   {
//     id: 1,
//     name: "John Doe",
//     checkIn: "01/01",
//     checkOut: "02/01",
//     roomNumber: 1,
//   }
// ]

// Ejemplo 2:

// Input:

// const hotel = hotelSystem(10);

// hotel.addReservation({
//   id: 1,
//   name: "John Doe",
//   checkIn: "01/01",
//   checkOut: "02/01",
//   roomNumber: 1,
// });

// hotel.addReservation({
//   id: 2,
//   name: "Pepe Doe",
//   checkIn: "01/01",
//   checkOut: "02/01",
//   roomNumber: 7,
// });

// // Buscar una resevación hecha
// hotel.searchReservation(2);

// Output:
// {
//   id: 2,
//   name: "Pepe Doe",
//   checkIn: "01/01",
//   checkOut: "02/01",
//   roomNumber: 7,
// }

// Ejemplo 3:

// Input:

// const hotel = hotelSystem(10);

// hotel.addReservation({
//   id: 1,
//   name: "John Doe",
//   checkIn: "01/01",
//   checkOut: "02/01",
//   roomNumber: 1,
// });

// hotel.addReservation({
//   id: 2,
//   name: "Pepe Doe",
//   checkIn: "01/01",
//   checkOut: "10/01",
//   roomNumber: 9,
// });

// // Buscamos habitaciones disponibles entre el 01 y el 05 del primer mes
// hotel.getAvailableRooms("01/01", "05/01")

// Output:

// [2, 3, 4, 5, 6, 7, 8, 10]


export function hotelSystem(rooms) {
  const reservations = [];

  function searchReservation(id) {
    const reservation = reservations.find(reservation => reservation.id === id);
    if (reservation) {
      return reservation;
    } else {
      throw new Error("La reservación no fue encontrada");
    }
  }

  function getSortReservations() {
    const sortedReservations = [...reservations].sort((a, b) => {
      const aDate = new Date(a.checkIn.split('/').reverse().join('-'));
      const bDate = new Date(b.checkIn.split('/').reverse().join('-'));
      return aDate - bDate;
    });
    return sortedReservations;
  }

  function addReservation(reservation) {
    const roomNumber = reservation.roomNumber;
    const checkIn = new Date(reservation.checkIn.split('/').reverse().join('-'));
    const checkOut = new Date(reservation.checkOut.split('/').reverse().join('-'));
    const conflictingReservation = reservations.find(r => r.roomNumber === roomNumber && checkIn < new Date(r.checkOut.split('/').reverse().join('-')) && checkOut > new Date(r.checkIn.split('/').reverse().join('-')));
    if (conflictingReservation) {
      throw new Error("La habitación no está disponible");
    } else {
      reservations.push(reservation);
      return "Reservación agregada correctamente";
    }
  }
  
  function getAvailableRooms(checkIn, checkOut) {
    const checkInDate = new Date(checkIn.split('/').reverse().join('-'));
    const checkOutDate = new Date(checkOut.split('/').reverse().join('-'));
    const reservedRooms = reservations.filter(reservation => checkInDate < new Date(reservation.checkOut.split('/').reverse().join('-')) && checkOutDate > new Date(reservation.checkIn.split('/').reverse().join('-'))).map(reservation => reservation.roomNumber);
    const availableRooms = [];
    for (let i = 1; i <= rooms; i++) {
      if (!reservedRooms.includes(i)) {
        availableRooms.push(i);
      }
    }
    return availableRooms;
  }  

  function removeReservation(id) {
    const reservationIndex = reservations.findIndex(reservation => reservation.id === id);
    if (reservationIndex !== -1) {
      const removedReservation = reservations.splice(reservationIndex, 1)[0];
      return removedReservation;
    } else {
      throw new Error("La reservación que se busca remover no existe");
    }
  }

  function getReservations() {
    return reservations;
  }

  return {
    searchReservation,
    getSortReservations,
    addReservation,
    removeReservation,
    getReservations,
    getAvailableRooms
  };
}
