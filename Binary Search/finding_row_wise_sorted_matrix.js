// function median(mat) {
//     const rows = mat.length;
//     const cols = mat[0].length;

//     // min-heap storing [value, row, col]
//     const minHeap = [];
//     const medianIndex=Math.floor((rows * cols) / 2);
//     let count = 0, result = -1;

//     // push the first element of each row into 
//     // the min-heap
//     for (let i = 0; i < rows; i++) {
//         minHeap.push([mat[i][0], i, 0]);
//     }

//     minHeap.sort((a, b)=>a[0] - b[0]);

//     // extract the smallest elements until 
//     // reaching the median
//     while (count <= medianIndex) {
//         const [val, row, col] = minHeap.shift();
//         result = val;
//         count++;

//         // if more elements are left in the current
//         // row, push next
//         if (col + 1 < cols) {
//             minHeap.push([mat[row][col + 1],row,col + 1]);
//             minHeap.sort((a, b) => a[0] - b[0]);
//         }
//     }

//     return result;
// }

// // Driver Code
// const matrix = [
//     [1, 3, 5],
//     [2, 6, 9],
//     [3, 6, 9]
// ];

// console.log(median(matrix));


function median(mat) {
    const n = mat.length;
    const m = mat[0].length;

    // initializing the minimum and maximum values
    let min = Number.MAX_VALUE, max = Number.MIN_VALUE;

    // iterating through each row of the matrix
    for (let i = 0; i < n; i++) {
        // updating the minimum value if current element
        // is smaller
        if (mat[i][0] < min) 
            min = mat[i][0];

        // updating the maximum value if current element 
        // is larger
        if (mat[i][m - 1] > max) 
            max = mat[i][m - 1];
    }

    // calculating the desired position of the median
    const desired = Math.floor((n * m + 1) / 2);

    // using binary search to find the median value
    let lo = min, hi = max;
    while (lo < hi) {
    
        // calculating the middle value
        const mid = Math.floor(lo + (hi - lo) / 2);

        // counting the number of elements less than or
        // equal to mid
        let place = 0;
        for (let i = 0; i < n; i++) {
            place += upperBound(mat[i], mid);
        }

        // updating the search range based on the count
        if (place < desired) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }

    // returning the median value
    return lo;
}

// helper function to find the upper bound of a 
// number in a row
function upperBound(row, num) {
    let lo = 0, hi = row.length;
    while (lo < hi) {
        const mid = Math.floor(lo + (hi - lo) / 2);
        if (row[mid] <= num) {
            lo = mid + 1;
        } 
        else {
            hi = mid;
        }
    }
    return lo;
}

// Driver Code
const mat = [
    [1, 3, 5],
    [2, 6, 9],
    [3, 6, 9]
];
console.log(median(mat));