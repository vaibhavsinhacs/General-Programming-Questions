// Q.4. Program to find sum of the prime factors o

#include <stdio.h>
#include <math.h>

int sum_prime_factors(int num) {
	int sum = 0;
	if(num % 2 == 0) {
		sum += 2;
		while(num % 2 == 0)
			num /= 2;
	}
	for(int i = 3; i <= sqrt(num); i += 2) {
		if(num % i == 0) {
			sum += i;
			while(num % i == 0)
				num /= i;
		}
	}
	if(num > 2)
		sum += num;
	return sum;
}

int main() {
  printf("Enter a number: ");
	int num = scanf("%d", &num) * num;
	int result = sum_prime_factors(num);
	printf("%d\n", result);
  return 0;
}
