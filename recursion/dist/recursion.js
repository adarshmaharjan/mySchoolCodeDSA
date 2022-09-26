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
//   }
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
const calculateSum = (n) => {
    if (n <= 1) {
        return n;
    }
    return n + calculateSum(n - 1);
};
console.log(calculateSum(3));
//# sourceMappingURL=recursion.js.map