// 2D Array with different data types
let arr = [
    [10, 20, 30],                 // Number
    ["Apple", "Banana", "Mango"], // String
    [true, false, true],          // Boolean
    [10.5, 20.5, 30.5]           // Decimal
];

console.log("Original 2D Array:");
console.log(arr);

// 1. PUSH - Add element at the end
arr[0].push(40);
console.log("1. Push:", arr[0]);

// 2. POP - Remove last element
arr[0].pop();
console.log("2. Pop:", arr[0]);

// 3. UNSHIFT - Add element at beginning
arr[1].unshift("Orange");
console.log("3. Unshift:", arr[1]);

// 4. SHIFT - Remove first element
arr[1].shift();
console.log("4. Shift:", arr[1]);

// 5. SPLICE - Add or remove elements
arr[2].splice(1, 1, true);
console.log("5. Splice:", arr[2]);

// 6. SLICE - Extract elements
let result = arr[3].slice(0, 2);
console.log("6. Slice:", result);

// 7. CONCAT - Join two arrays
let newArray = arr[0].concat([50, 60]);
console.log("7. Concat:", newArray);

console.log("Final 2D Array:");
console.log(arr);