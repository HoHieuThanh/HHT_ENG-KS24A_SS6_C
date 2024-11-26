#include <stdio.h>
int main(){
	
	int a, b, c, d, e, le = 0, chan = 0;
	printf("nhap vao 5 so nguyen bat ki:\n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	if(a % 2 ==0){
		chan++;
	}else{
		le++;
	}
	
	if(b % 2 ==0){
		chan++;
	}else{
		le++;
	}
	if(c % 2 ==0){
		chan++;
	}else{
		le++;
	}
	if(d % 2 ==0){
		chan++;
	}else{
		le++;
	}
	if(e % 2 ==0){
		chan++;
	}else{
		le++;
	}

	printf("Cac so le trong day so tren la: %d\n", le);
	printf("Cac so le trong day so tren la: %d", chan);
	
	return 0;
}