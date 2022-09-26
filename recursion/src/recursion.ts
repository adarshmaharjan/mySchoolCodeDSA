//// *reversing  a string
// const reverseString = (input: string): string => {
//   if (input === "") {
//     return ""
//   }
//   return reverseString(input.substring(1)) + input.charAt(0)
// }
// console.log(reverseString("hello"))

//// *palindrome
// const isPalindrome = (input: string): boolean => {
//   if (input.length === 0 || input.length === 1) {
//     return true
//   }
//   if (input.charAt(0) == input.charAt(input.length - 1)) {
//     return isPalindrome(input.substring(1, input.length - 1))
//   }l
//   return false
// }
// console.log(isPalindrome("racecar"))

//// *decimal to binary

// const findBinary = (decimal: number, result = '': string): string => {
//   if (decimal === 0) {
//     return result
//   }
//   result = (decimal % 2) + result
//   return findBinary(Math.floor(decimal / 2), result)
// }
// console.log(findBinary(282, ""))

//// *sum of natural numbers

// const calculateSum = (n: number): number => {
//   if (n <= 1) {
//     return n
//   }
//   return n + calculateSum(n - 1)
// }
// console.log(calculateSum(3))

//// *binary search

// const binarySearch = (
//   arr: number[],
//   left: number,
//   right: number,
//   value: number
// ): number => {
//   if (left > right) {
//     return
//   }
//   let mid: number = (left + right) / 2
//   mid = Math.floor(mid)
//   if (arr[mid] === value) {
//     return mid
//   }
//   if (arr[mid] > value) {
//     return binarySearch(arr, left, mid - 1, value)
//   }
//   if (arr[mid] < value) {
//     return binarySearch(arr, mid + 1, right, value)
//   }
// }
// const testArr: number[] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
// const res: number = binarySearch(testArr, 0, testArr.length - 1, 5)
// console.log(res)

//// *find fibonacci number
//// !non optimized
// const fib = (n: number): number => {
//   if (n === 0 || n === 1) {
//     return n
//   } else {
//     return fib(n - 1) + fib(n - 2)
//   }
// }
//// *merge sort
// const merge = (
//   data: number[],
//   start: number,
//   mid: number,
//   end: number
// ): void => {
//   let temp: number[] = []
//   let i: number = start
//   let j: number = mid + 1
//   let k: number = 0

//   while (i <= mid && j <= end) {
//     if (data[i] <= data[j]) {
//       temp[k++] = data[i++]
//     } else {
//       temp[k++] = data[i++]
//     }
//   }
//   while (i <= mid) {
//     temp[k++] = data[i++]
//   }
//   while (j <= end) {
//     temp[k++] = data[j++]
//   }
//   for (let i = start; i <= end; i++) {
//     data[i] = temp[i - start]
//   }
// }
// const mergeSort = (data: number[], start: number, end: number) => {
//   if (start < end) {
//     let mid: number = Math.floor((start + end) / 2)
//     mergeSort(data, start, mid)
//     mergeSort(data, mid, end)
//     merge(data, start, mid, end)
//   }
// }
