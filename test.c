#include <stdio.h>

long int sum(long int a, long int b) {
	return a + b;
}

int main() {

	long int a = 0xdeadbeef;
	long int b = 0xcafe1337;

	long int result = sum(a, b);
	printf("result: %ld\n", result);
}
