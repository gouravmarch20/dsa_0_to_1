//  ? TIME LIMIT EXCEED
const gcd = (A, B) => {
  if (A === 0) return B
  if (B === 0) return A
  while (A !== 0 && B !== 0) {
    if (A > B) {
      A = A - B
    } else {
      B = B - A
    }
    return A == 0 ? B : A;
}
}

console.log(gcd(48, 24))