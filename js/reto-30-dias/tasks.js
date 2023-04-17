// Antes re refactorizar:
export function doTask1(callback) {
  window.setTimeout(() => callback('Task 1'), 300);
}

export function doTask2(callback) {
  window.setTimeout(() => callback('Task 2'), 300);
}

export function doTask3(callback) {
  window.setTimeout(() => callback('Task 3'), 300);
}

// Después de refactorizar:

export function doTask1() {
  return new Promise(resolve => {
    window.setTimeout(() => resolve('Task 1'), 300);
  });
}

export function doTask2() {
  return new Promise(resolve => {
    window.setTimeout(() => resolve('Task 2'), 300);
  });
}

export function doTask3() {
  return new Promise(resolve => {
    window.setTimeout(() => resolve('Task 3'), 300);
  });
}
