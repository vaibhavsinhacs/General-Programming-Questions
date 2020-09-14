// Q.7. Program to check whether a number is a Harshad number or not

#include <stdio.h>

int main() {
  printf("Enter a number: ");
	int num = scanf("%d", &num) * num;
	int sum = 0, rem = 0, backup = num;
	while(backup > 0) {
		rem = backup % 10;
		sum += rem;
		backup /= 10;
	}
	if(num % sum == 0)
		printf("Harshad number\n");
	else
		printf("Not Harshad number\n");
  return 0;
}
