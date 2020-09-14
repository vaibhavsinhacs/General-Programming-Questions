// Q.3. Program to print nth prime number

#include <stdio.h>

void nth_prime(int n) {
	int count = 0, flag = 0;
	for(int i = 2; i > 0; i++) {
		flag = 0;
		for(int j = 2; j < i; j++) {
			if(i % j == 0) {
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			count++;
		if(count == n) {
			printf("%d\n", i);
			break;
		}
	}
}

int main() {
	printf("Enter n: ");
	int n = scanf("%d", &n) * n;
	nth_prime(n);
	return 0;
}
