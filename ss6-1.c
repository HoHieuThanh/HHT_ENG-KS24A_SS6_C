#include <stdio.h>
int main(){
	
	int a, b, c, d, e;
	printf("nhap vao 5 so nguyen bat ki:\n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if(a % 2 ==0){
		a=0;
	}
	if(b % 2 ==0){
		b=0;
	}
	if(c % 2 ==0){
		c=0;
	}
	if(d % 2 ==0){
		d=0;
	}
	if(e % 2 ==0){
		e=0;
	}
	printf("tong cac so le trong day so tren la: %d",a+b+c+d+e);
	
	return 0;
}