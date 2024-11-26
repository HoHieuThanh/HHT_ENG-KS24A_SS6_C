#include <stdio.h>

int main() {
	int num;
	printf("Nhap vao 1 so nguyen: ");
	scanf("%d", &num);
	printf("Cac uoc cua so %d la: ", num);
	for(int i = 1; i <= num; i++) {
    	if(num % i == 0) {
        printf("%d ", i);
    	}
	}

	return 0;
}