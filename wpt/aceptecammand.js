

// file: evenSum.js

let sum = 0;

// command line arguments start from index 2
for (let i = 2; i < process.argv.length; i++) {
    let num = parseInt(process.argv[i]);

    if (num % 2 === 0) {
        sum = sum + num;
    }
}

console.log("Sum of even numbers =", sum);