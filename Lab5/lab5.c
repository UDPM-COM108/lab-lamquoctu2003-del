

// Bài 1: Tính năm nhuận dương lịch
#include <stdio.h>
#include <math.h>
int main()
{
    int year;
    printf("Nhập năm: ");
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Đây là năm nhuần: %d\n", year);
    }
    else
    {
        printf("Đây không phải năm nhuần: %d\n", year);
    }
    return 0;

// Bài 2: Tìm số lớn nhất trong 3 số đã cho
#include <stdio.h>
#include <math.h>

    double a, b, c;
    printf("nhập a: ");
    scanf("%lf", &a);
    printf("nhập b: ");
    scanf("%lf", &b);
    printf("nhập c: ");
    scanf("%lf", &c);
    double max = fmax(a, fmax(b, c));
    printf("max = %lf\n", max);
    return 0;

// Bài 3: Xây dựng hoán vị
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
    int x, y;
    printf("Nhập x: ");
    scanf("%d", &x);
    printf("Nhập y: ");
    scanf("%d", &y);
    
    printf("Trước: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Sau: x = %d, y = %d\n", x, y);
    
    return 0;
}
