#include <stdio.h>

int main (){
    int chieudai , chieurong , chuvi , dientich;
    printf("nhap chieu dai hinh chu nhat: ");
    scanf("%d", &chieudai);
    printf("nhap chieu rong hinh chu nhat: ");
    scanf("%d", &chieurong);
    chuvi = (chieudai + chieurong) * 2;
    dientich = chieudai * chieurong;
    printf("chu vi hinh chu nhat la: %d\n", chuvi);
    printf("dien tich hinh chu nhat la: %d\n", dientich);
    return 0;
}