//Bài 2 chu vi diện tích hình chữ nhật 
#include <stdio.h>

int main(void) {
    double chieuDai , chieuRong;

    //nhập chiều dài 
    printf("Nhập chiều dài hình chữ nhật: ");
    if (scanf("%lf", &chieuDai) != 1) {
        printf("Loi: Dữ liệu nhập vào không hợp lệ.\n");
        return 1;
 }
    //nhập chiều rộng 
    printf("nhập chiều rộng hình chữ nhật:");
    if( scanf("%lf", &chieuRong) != 1) {
        printf("Loi: Dữ liệu nhập vào không hợp lệ.\n");
        return 1;
    }
    // kiểm tra hợp lệ 
    if(chieuDai <= 0 || chieuDai <= 0) {
        printf("Loi: Chiều dài và chiều rộng phải là số dương.\n");
        return 1;
    }
    //Tính toán 
    double DienTich = chieuDai * chieuRong;
    double ChuVi = 2 * (chieuDai + chieuRong);
    //In kết quả với 2 chữ số thập phân 
    printf("\n--- Ket qua ---\n");
    printf("Chu vi :%.2f\n", ChuVi);
    printf("Dien tich: %.2f\n", DienTich);
     return 0;
}