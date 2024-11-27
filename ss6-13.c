#include <stdio.h>

int main() {
    int d, m;
    printf("Nhap ngay sinh: ");
    scanf("%d", &d);
    printf("Nhap thang sinh: ");
    scanf("%d", &m);
    
    if(d > 0 && d < 32 && m > 0 && m < 13) {
	
    if ((m == 3 && d >= 21) || (m == 4 && d <= 20)) {
        printf("Bach Duong");
    } else if ((m == 4 && d >= 21) || (m == 5 && d <= 20)) {
        printf("Kim Nguu");
    } else if ((m == 5 && d >= 21) || (m == 6 && d <= 21)) {
        printf("Song Tu");
    } else if ((m == 6 && d >= 22) || (m == 7 && d <= 22)) {
        printf("Cu Giai");
    } else if ((m == 7 && d >= 23) || (m == 8 && d <= 22)) {
        printf("Su Tu");
    } else if ((m == 8 && d >= 23) || (m == 9 && d <= 22)) {
        printf("Xu Nu");
    } else if ((m == 9 && d >= 23) || (m == 10 && d <= 23)) {
        printf("Thien Binh");
    } else if ((m == 10 && d >= 24) || (m == 11 && d <= 22)) {
        printf("Bo Cap");
    } else if ((m == 11 && d >= 23) || (m == 12 && d <= 21)) {
        printf("Nhan Ma");
    } else if ((m == 12 && d >= 22) || (m == 1 && d <= 19)) {
        printf("Ma Ket");
    } else if ((m == 1 && d >= 20) || (m == 2 && d <= 18)) {
        printf("Bao Binh");
    } else {
        printf("Song Ngu");
    }
	} else {
		printf("Ngay thang khong hop le!");
	}

    return 0;
}