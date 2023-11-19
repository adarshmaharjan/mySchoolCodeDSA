// function binarySearch (searchList, value) {
//   const arrayLength = searchList.length
//   let arrayPath = [];
//   let topPointer = 0;
//   let lastPointer = searchList.length - 1;

//   while (topPointer <= lastPointer) {
//     let midPointer = Math.floor((topPointer + lastPointer) / 2);

//     if (searchList[midPointer] === value) {
//       arrayPath.push(searchList[midPointer])
//       return arrayPath
//     }
//     else if (searchList[midPointer] < value) {
//       arrayPath.push(searchList[midPointer])
//       topPointer = midPointer + 1
//     }
//     else {
//       arrayPath.push(searchList[midPointer])
//       lastPointer = midPointer - 1
//     }
//   }
//   return "Value Not Found";
// }

// let res = binarySearch([1, 2, 3, 4, 5, 6, 7], 5);
// console.log(res);