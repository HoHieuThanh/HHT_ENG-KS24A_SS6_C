#include <stdio.h>
int main(){
	
	int pass = 1234, in;
	printf("nhap mat khau: ");
	scanf("%d", &in);
	if(in == pass){
		printf("dung");
	}else{
		printf("sai");
	}
	
	return 0;
}