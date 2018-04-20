// Node.js implementation of LSD radix sort with file logging
const fs = require('fs');
const RadixSort = function (array = null, maxDigits = 0) {
    if (!array || !maxDigits) {
        console.log("Please input valid arguments");
        return;
    }
    else {
        //implementation of radix sort
        let counter = [[]];
        let mod = 10;
        let dev = 1;
        for (let i = 0; i < maxDigits; i++ , dev *= 10, mod *= 10) {
            for (let j = 0; j < array.length; j++) {
                let bucket = parseInt((array[j] % mod) / dev);
                if (counter[bucket] == null) {
                    counter[bucket] = [];
                }
                counter[bucket].push(array[j]);
            }
            let pos = 0;
            for (let j = 0; j < counter.length; j++) {
                let value = null;
                if (counter[j] != null) {
                    while ((value = counter[j].shift()) != null) {
                        array[pos++] = value;
                    }
                }
            }
        }
        return array;
    }
}
//run the function with hardcoded data
let unsorted = [894, 113, 453, 1, -2, 0, 9];
console.log(RadixSort(unsorted, 3));
let returnedData = { unsortedArray: unsorted, sortedArray: RadixSort(unsorted,3) };
//write data to log
fs.appendFile('fileLogs.txt', data=JSON.stringify(returnedData), encoding = 'utf-8', function(err){
    if(err){
        console.log("Some error occurred.")
        console.log(err.stack);
    }
    else{
        console.log("Logs updated");
    }
});
console.log("Logging...");