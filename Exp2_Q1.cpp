
/*
Write a program to find the factorial of given number using recursive function.
*/

#include <iostream>
using namespace std;

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  cout << "Factorial of " << n << " is " << factorial(n) << endl;
  return 0;
}
