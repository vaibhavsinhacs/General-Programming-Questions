// Q.1. Program to find the GCD of n numbers

#include <stdio.h>

int gcd(int first, int second) {
	if(first == 0)
		return second;
	return gcd(second % first, first);
}

int calculate_gcd(int numbers[], int size) {
	int result = numbers[0];
	for(int i = 1; i < size; i++) {
		result = gcd(numbers[i], result);
		if(result == 1)
			return 1;
	}
	return result;
}

int main() {
	printf("How many numbers?	");
  int size = scanf("%d", &size) * size;
  int numbers[size], hcf;
	printf("Enter the numbers: ");
	for(int i = 0; i < size; i++)
		scanf("%d", &numbers[i]);
  hcf = calculate_gcd(numbers, size);
  printf("GCD of the given numbers is %d\n", hcf);
  return 0;
}
