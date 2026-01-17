function addOne() {
    return function(number) {
        return number + 1;
    };
}

const increment = addOne();
console.log(increment(4));