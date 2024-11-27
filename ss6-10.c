#include <stdio.h>
int main(){
	
	int num, i, count=0;
	printf("nhap vao 1 so nguyen duong: ");
	scanf("%d", &num);
	for(i=2 ; i <= num ; i++) {
		if(num % i == 0){
			count++;
		}
	}
	if (count == 1){
		printf("so %d la so nguyen to", num);
	}else{
		printf("so %d khong phai so nguyen to", num);
	}
	
	return 0;
}