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

//Bài 2: chu vi diện tích hình chữ nhật
#include <stdio.h>
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

//Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
#include <stdio.h>
#define PI 3.14159265358979323846
    float r, chuVi, dienTich;

    // Nhập bán kính
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    // Tính chu vi và diện tích
    chuVi = 2 * PI * r;
    dienTich = PI * r * r;

    // Xuất kết quả
    printf("Chu vi hinh tron = %.2f\n", chuVi);
    printf("Dien tich hinh tron = %.2f\n", dienTich);

    return 0;


//BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
#include <stdio.h>
    float toan, ly, hoa, trungBinh;

    // Nhập điểm các môn
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Ly: ");
    scanf("%f", &ly);

    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);

    // Tính điểm trung bình
    trungBinh = (toan + ly + hoa) / 3;

    // Xuất kết quả
    printf("Diem trung binh = %.2f\n", trungBinh);

    return 0;


//BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH GIÁ TRỊ TUYỆT ĐỐI
#include <stdio.h>

    float x, absValue;

    // Nhập số
    printf("Nhap mot so: ");
    scanf("%f", &x);

    // Tính giá trị tuyệt đối
    if (x < 0)
        absValue = -x;
    else
        absValue = x;
    // Xuất kết quả
    printf("Gia tri tuyet doi cua %.2f la %.2f\n", x, absValue);
    return 0;
}

