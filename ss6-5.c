#include <stdio.h>

int main() {
	int m, y;
	printf("Nhap vao so nam: ");
	scanf("%d", &y);
	printf("Nhap vao so thang: ");
	scanf("%d", &m);

switch(m) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Thang %d nam %d co 31 ngay.", m, y);
        break;
        
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Thang %d nam %d co 30 ngay.", m, y);
        break;
        
    case 2:
        if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
            printf("Thang 2 nam %d co 29 ngay.", y);
    	}
        else{
            printf("Thang 2 nam %d co 28 ngay.", y);
        }
        break;
        
    default:
        printf("So thang khong hop le.");
	}

	return 0;
}