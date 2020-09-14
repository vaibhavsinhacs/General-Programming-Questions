// Q.6.  Program to convert a number from decimal to binary

#include <stdio.h>
#include <math.h>

int main() {
  printf("Enter a number: ");
	int num = scanf("%d", &num) * num;
	printf("Enter number of bits (up to 32): ");
	int bits = scanf("%d", &bits) * bits;
	int min_bits = ceil(log2(num + 1));
	if(bits < min_bits) {
		printf("The number cannot be represented in %d bits.\n", bits);
		return 0;
	}
	for(int i = bits - 1; i >= 0; i--) {
		int temp = num >> i;
		if(temp & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
  return 0;
}
