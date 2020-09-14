// Q.5. Program to print first n non-fibonacci numbers

#include <stdio.h>

void non_fib(int num) {
	int first = 0, second = 1, next = 0, count = 0;
	while(1) {
		for(int j = first + 1; j < second; j++) {
			printf("%d ", j);
			count++;
			if(count == num) {
				printf("\n");
				return;
			}
		}
		next = first + second;
		first = second;
		second = next;
	}
}

int main() {
	printf("Enter the number : ");
	int num = scanf("%d", &num) * num;
	non_fib(num);
	return 0;
}
