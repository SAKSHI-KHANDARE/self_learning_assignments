
export function check() {
    let b = "123416a";
    let sum = 0;
    for (var i = 0; i < b.length;){
        if (!isNaN(b[i]))
            sum += parseInt(b[i]);
    }
    console.log("Addition is " + sum)
    console.log(`sum of ${b} is ${sum}`);
}

export function call() {

}
