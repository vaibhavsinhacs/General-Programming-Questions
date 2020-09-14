// Q.2. Program to print nth Fibonacci number

#include <stdio.h>

int fib(int n) {
	if(n == 1)
		return 0;
	if(n == 2 || n == 3)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

int main() {
  printf("Enter n: ");
  int n = scanf("%d", &n) * n;
  printf("%d\n", fib(n));
  return 0;
}