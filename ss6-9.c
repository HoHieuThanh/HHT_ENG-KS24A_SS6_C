#include <stdio.h>

int main() {
	
	int num1, num2, num3, a, b, c, sum;
	printf("Cac so armstrong co 3 chu so la: ");
	for(num1 = 100; num1 < 1000; num1++) {
		a = (num1 / 100) * (num1 / 100) * (num1 / 100);
		num2 = num1 % 100;
		b = (num2 / 10) * (num2 / 10) * (num2 / 10);
		num3 = num2 % 10;
		c = num3 * num3 * num3;
		sum = a + b + c;
		
		if(num1 == sum){
			printf("%d ", num1);
		}
	}
	
	return 0;
} 