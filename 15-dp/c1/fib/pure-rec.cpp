class Solution {
 public:
  int recFib(int n) {
    if (n == 0 || n == 1) return n;

    return recFib(n - 1) + recFib(n - 2);
  }
  int fib(int n) { return recFib(n); }
};