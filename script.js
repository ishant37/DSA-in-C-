// function createCounter() {
//   let count = 1; // 'count' is the private variable
  
//   // The returned object's methods are closures
//   return {
//     increment: function() {
//       count = count + 1; // Accesses 'count' from the outer scope
//       return count;
//     },
//     getValue: function() {
//       return count;
//     }
//   };
// }

// const counterA = createCounter();
// counterA.increment(); // 2
// console.log(counterA.getValue()); // 2

// // You cannot directly access 'count' from outside
// console.log(counterA.count); // undefined


/**
 * Debounce a function call.
 * @param {Function} func - The function to debounce.
 * @param {number} delay - The delay in milliseconds.
 */
function debounce(func, delay) {
  let timeoutId; // Variable to hold the timer ID

  // This inner function is the closure returned by debounce
  return function(...args) {
    // 'this' context needs to be maintained, so we capture it
    const context = this; 

    // 1. Clear the previous timer (reset the debounce period)
    clearTimeout(timeoutId);

    // 2. Set a new timer
    timeoutId = setTimeout(() => {
      // 3. Execute the function with the correct context and arguments
      func.apply(context, args);
    }, delay);
  };
}

// --- Example Usage ---
const logInput = (text) => console.log('API call for:', text);
const debouncedLog = debounce(logInput, 500);

// Typing "hello" quickly:
// debouncedLog('h'); // Timer starts (500ms)
// debouncedLog('he'); // Previous timer cleared, new one starts (500ms)
// debouncedLog('hel'); // Previous timer cleared, new one starts (500ms)
// ... 
// (After a 500ms pause) -> Output: 'API call for: hello'

