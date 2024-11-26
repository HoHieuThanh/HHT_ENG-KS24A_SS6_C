#include<stdio.h>
int main(){
	
	int bd, thang;
	float lai, tienlai=0;
	printf("nhap vao so tien ban dau ");
	scanf("%d", &bd);
	printf("nhap vao lai suat thang (bo ki tu phan tram) ");
	scanf("%f", &lai);
	printf("nhap vao so thang ");
	scanf("%d", &thang);
	
	for(;thang>0;thang--) {
		tienlai=bd+(bd*(lai/100));
		bd=tienlai;
	}
	printf("\nso tien lai la: %.3f", tienlai);
	
	return 0;
}