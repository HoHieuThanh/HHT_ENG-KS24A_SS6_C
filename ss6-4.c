#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("ax^2 + bx + c = 0\nNhap so a: ");
    scanf("%f", &a);
    printf("Nhap so b: ");
    scanf("%f", &b);
    printf("Nhap so c: ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1 = %.1f\n", x1);
        printf("x2 = %.1f\n", x2);
    } else if (delta == 0) {
        x1 = -b / (2*a);
        printf("Phuong trinh co nghiem kep:\n");
        printf("x = %.1f\n", x1);
    } else {
        printf("Phuong trinh vo nghiem\n");
    }

    return 0;
}
