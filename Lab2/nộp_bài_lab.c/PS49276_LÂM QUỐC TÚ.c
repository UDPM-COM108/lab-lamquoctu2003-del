//Bài 1: XÂY CHƯƠNG TRÌNH 2 SỐ +- NGUYÊN
#include <stdio.h>

int main() {
    int a, b, tong, hieu;
    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);
    tong = a + b;
    hieu = a - b;
    printf("Tong cua a va b la: %d", tong);
    printf("Hieu cua a va b la: %d", hieu);
    return 0;
 }
