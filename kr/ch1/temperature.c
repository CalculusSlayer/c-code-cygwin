#include <stdio.h>

int main(void) {
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%3d\t%6d\n", fahr, celsius);
		fahr = fahr + step;
	}

	printf("char - %lu bytes\n", sizeof(char));
	printf("short - %lu bytes\n", sizeof(short));
	printf("int - %lu bytes\n", sizeof(int));
	printf("long - %lu bytes\n", sizeof(long));
}

