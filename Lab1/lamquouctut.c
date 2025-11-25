#include <stdio.h>
 int main () {
    int a , b , c;
    printf("nhap canh thu nhat: ");
    scanf("%d", &a);
    printf("nhap canh thu hai: ");
    scanf("%d", &b);
    printf("nhap canh thu ba: ");
    scanf("%d" ,&c);
    if (a+b > c && a+c > b && b+c > a) {
        printf("day la 3 canh cua mot tam giac \n");
    } else {
        printf("day khong phai la 3 canh cua mot tam giac \n");
        return 0;
    }
    }
 